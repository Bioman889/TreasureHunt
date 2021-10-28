using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Boar : MonoBehaviour
{
    public enum State { Idle, Chase, Charge}
    [HideInInspector]
    public NavMeshAgent agent = default;
    public State state = default;
    public bool isCharging;
    public bool GoingToPosition;
    [Space]


    [Header("Another Version")]
    public Transform Player;
    private Vector3 position;

    public float speed = 4f;
    public float MaxDistance = 10f;
    public float MinDistance = 5f;
    // Start is called before the first frame update
    public void SetTarget(Transform target, float updateTime = 1f)
    {
        if(state == State.Charge)
        {
            transform.parent = null;
            agent.enabled = true;
            //Put in behavior on when boar charges
        }
        state = State.Chase;
        agent.stoppingDistance = 1f;

    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        position = transform.position;
        transform.LookAt(Player);
        if(Vector2.Distance(position, Player.position) >= MinDistance)
        {
            transform.position += transform.forward * speed * Time.deltaTime;
        }
    }
}
