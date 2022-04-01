using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Boar : MonoBehaviour
{
    [SerializeField]
    private Transform target;
    private Rigidbody rb;

    [Space]
    [Header("Stats")]
    public int speed = 4;
    [Tooltip("Time interval for the boar to move between the next position when idling")]
    public float nextPositionTimer = 5; //timer til AI goes into nextPosition
    [Tooltip("How close the boar has to be to ATTACK the player")]
    public float attackRange = 7f;
    [Tooltip("How close the boar has to be to CHASE the player: Try to keep this number higher than attackRange")]
    public float detectionRange = 10f;
    [Tooltip("Range of where the boar can travel to")]
    public float roamingDistance = 5.0f;
    private float distanceFromTarget;
    private float timer;

    [Space]
    [Header("Stats when fighting player")]
    [Tooltip("Smoothness of how much the boar rotates when charging forward")]
    public float angleChangingSpeed;
    [Tooltip("Time interval for the boar to rest before attacking again")]
    public float attackCooldown = 2f;
    [Tooltip("How long the boar charges forward")]
    public float chargingDuration = 3;

    public GameObject designatedLocation; //Parent object for boar. The general position on which it roams in. 
    public enum BoarState { Idle, Chase, Charge }
    public BoarState state = default;
    public NavMeshAgent agent;

    [Space]
    [Header("Boolean")]
    public bool isCharging;
    public bool playerDetected;
    // Start is called before the first frame update

    void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
        state = BoarState.Idle; //AI will initially be roaming;
        rb = GetComponent<Rigidbody>();
        target = GameObject.FindWithTag("Player").transform;
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(agent.destination);
        distanceFromTarget = Vector3.Distance(target.position, transform.position);
        switch (state)
        {
            case BoarState.Idle: Patrol(); break;
            case BoarState.Chase: DetectedPlayer(); break;
            case BoarState.Charge: Attack(); break;
        }
    }

    void Patrol()
    {
        timer += Time.deltaTime;
        if ((timer >= nextPositionTimer) && (playerDetected == false))
        {
            Debug.Log("Boar is currently " + state);
            Vector3 randomDirection = Random.insideUnitSphere * roamingDistance; //Vector3 that will get a random position within a sphere
            randomDirection += designatedLocation.transform.position;

            NavMeshHit navhit;
            NavMesh.SamplePosition(randomDirection, out navhit, roamingDistance, -1);
            agent.SetDestination(navhit.position);
            timer = 0;
        }
        if (distanceFromTarget <= detectionRange) //If target is within the boar's detection range...
        {
            timer = 0;
            playerDetected = true;
            state = BoarState.Chase;
            Debug.Log("Chasing Player");
        }
    }
    void DetectedPlayer()
    {
        agent.stoppingDistance = attackRange;
        agent.SetDestination(target.position);
        FaceTarget();

        if (distanceFromTarget <= attackRange)
        {
            Debug.Log("Is is in attack mode");
            agent.ResetPath();
            state = BoarState.Charge;
        }
        else if (distanceFromTarget > detectionRange)//if target goes out of detection range...
        {
            playerDetected = false;
            agent.stoppingDistance = 0;
            //agent.SetDestination(transform.position); //abruptly ends the destincation on its place
            agent.ResetPath(); //nullifies current set destination
            Debug.Log("Going back to roaming");
            state = BoarState.Idle;
        }
    }
    void Attack()
    {
        timer += Time.deltaTime;
        if (timer >= attackCooldown)
        {
            isCharging = true;
            Vector3 direction = target.position - rb.position;
            direction.Normalize();
            float rotateAmount = Vector3.Cross(direction, transform.forward).y;
            rb.angularVelocity = new Vector3(0, -angleChangingSpeed, 0) * rotateAmount;
            rb.velocity = transform.forward * speed;

            if (timer >= chargingDuration + attackCooldown)
            {
                isCharging = false;
                Debug.Log("Boar has stopped charging forward");
                timer = 0; //Boar attack is on cooldown
            }
        }
        else
        {
            FaceTarget();
        }
        if (!isCharging && (distanceFromTarget > detectionRange)) //If boar isn't charging and the target is too far within its detection range
        {
            timer = 0;
            playerDetected = false;
            state = BoarState.Idle;
        }

    }
    void FaceTarget()
    {
        Vector3 direction = (target.position - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
    }
}
