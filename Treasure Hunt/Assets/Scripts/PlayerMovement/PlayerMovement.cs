using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public CharacterController controller;
    [Header ("Stats")]

    [RangeAttribute(1, 30)]
    public float speed = 12f;
    public float jumpheight = 3;
    Vector3 velocity;
    float gravity = -9.81f;

    public Transform groundCheck; //Will use an empty game object's concurrent position to check if it touches the ground.
    public float groundDistance = 0.4f;
    public LayerMask groundMask; //The layermask considered as 'ground'

    [Header("Booleans")]
    public bool isGrounded;

    private CapsuleCollider coll;
    private Rigidbody playerRb;

    // Start is called before the first frame update
    void Start()
    {
        playerRb = this.GetComponent<Rigidbody>();
        coll = this.GetComponent<CapsuleCollider>();
    }

    // Update is called once per frame
    void Update()
    {
        isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);

        if(isGrounded && velocity.y < 0)
        {
            velocity.y = -2f;
        }

        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");

        Vector3 movement = transform.right * x + transform.forward * z;

        controller.Move(movement * speed * Time.deltaTime); //(movement within x and z)
        if(Input.GetButtonDown("Jump") && isGrounded)
        {
            velocity.y = Mathf.Sqrt(jumpheight * -2f * gravity);
        }
        velocity.y += gravity * 4 * Time.deltaTime;
        controller.Move(velocity * Time.deltaTime); //uses the velocity in y for the free fall of the player (movement in y)
    }
}
