using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

//Need to fix: Boar should face where it is charging towards
public class BoarBehaviour : MonoBehaviour
{
    public enum State {FreeRoam, Follow, Charge}
    public State state = default;

    public float wanderRadius;
    public float wanderTimer;
    public float windUpDistance = 3f;
    [Space]
    
    public float speed;
    public float turnSpeed = 80f;
    public float visionRadius = 10f;

    [SerializeField]
    private Transform target;
    private NavMeshAgent agent;
    private float timer;
    private float RegTurnSpeed;

    private void OnEnable()
    {
        agent = GetComponent<NavMeshAgent>();
        timer = wanderTimer;
        target = PlayerManager.instance.player.transform;

        speed = agent.speed;
        RegTurnSpeed = agent.angularSpeed;
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float distance = Vector3.Distance(target.position, transform.position); //distance from this object to target
        if (distance <= visionRadius) //if player is within 'visionRadius'...
        {
            state = State.Follow;
            agent.stoppingDistance = windUpDistance; //Boar will stop within a certain distance, which leads to the next state (Charge)
            agent.SetDestination(target.position);
            FaceTarget();

            if(distance <= agent.stoppingDistance)
            {
                Debug.Log("Charging up at player");
                state = State.Charge;
                StartCoroutine(Bulldozing());
            }
        }

        if(state == State.FreeRoam)
        {
            timer += Time.deltaTime;
            if (timer >= wanderTimer)
            {
                Debug.Log(state);
                Vector3 newPos = RandomNavSphere(transform.position, wanderRadius, -1);
                agent.SetDestination(newPos);
                timer = 0;
            }
        }

        IEnumerator Bulldozing()
        {
            if(distance <= visionRadius * 2f) //This part causes bugs as well
            {
                agent.angularSpeed = turnSpeed; //reduces the speed in which the boar turns. (we can assign it with a public variable instead of curring it in half)
                agent.speed = 1000;

                yield return new WaitForSeconds(4); //waits for 4 seconds...
                agent.SetDestination(target.position);//til it charges the player
                Debug.Log("Bulldozed the player");
                yield return new WaitForSeconds(4); //waits for 1 second...

                agent.speed = speed;
                agent.angularSpeed = RegTurnSpeed;
                state = State.FreeRoam;
                Debug.Log("Reset the stats");
                
            }
            yield return null;
        }
    }

    void FaceTarget()
    {
        Vector3 direction = (target.position - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
    }

    //This function is used to determine a random location that the NPC will go to within a certain radius
    public static Vector3 RandomNavSphere(Vector3 origin, float distance, int layerMask)
    {
        Vector3 randDirection = Random.insideUnitSphere * distance;
        randDirection += origin;

        NavMeshHit navHit;
        NavMesh.SamplePosition(randDirection, out navHit, distance, layerMask);

        return navHit.position;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, visionRadius);
    }
}
