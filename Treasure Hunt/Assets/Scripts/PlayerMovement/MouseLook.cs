using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
 *Lines 44-50 
 * Draws a gizmo to show how far a player can interact with the world around them
 */
public class MouseLook : MonoBehaviour
{
    [RangeAttribute(1, 10)]
    [Tooltip("Editable mouse sensitivity to look around.")]
    public float mouseSensitivity = 100f;

    [Tooltip("Assign a player to control")]
    public Transform playerBody;
    
    [RangeAttribute(1,20)]
    [Tooltip("How far a player has to be to interact with interactables")]
    public float range = 50f;

    float xRotation = 0f;

    public Camera cam;

    public Interactable interactableObject;
    // Start is called before the first frame update
    void Start()
    {
        cam = GetComponent<Camera>();
        Cursor.lockState = CursorLockMode.Locked;
    }

    // Update is called once per frame
    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity; //used for the movement of entire player body
        float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity;

        xRotation -= mouseY;
        xRotation = Mathf.Clamp(xRotation, -90f, 90f); //Prevents overrotation where player rotates their head all the way behind them in the y-axis

        transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
        playerBody.Rotate(Vector3.up * mouseX);

        Debug.DrawRay(cam.transform.position, cam.transform.forward * range, Color.red);
        RaycastHit hit;
        if(Physics.Raycast(cam.transform.position, cam.transform.forward, out hit, range))
        {
            Debug.Log(hit.transform.name);
            
            //Getcomponent of pickupAllowed and turn it to true.
            if(hit.collider.GetComponent<Interactable>() != null) //if the object hit has the component or derived from "Interactable"...
            {
                if(interactableObject != null) //if interactableObject HAS BEEN ASSIGNED WITH A COMPONENT...
                {
                    if(interactableObject.gameObject != hit.collider.gameObject) //and that assigned component is different from the current collider hit...
                    {
                        interactableObject.hitByRayCast = false; //Stops player from interacting with an object when they immediately look at another interactable object
                        //interactableObject.LookingAtInteractable(); //THIS LINE CAUSED A BUG where it would turn off the textbox abruptly when looking at interactables
                        Debug.Log("The current local interactableObject is: " + interactableObject.gameObject + " and its hitByRayCast is... " + interactableObject.hitByRayCast);
                        Debug.Log("Chagning local interactable component from " + interactableObject.gameObject + " to " + hit.collider.gameObject);
                        interactableObject = hit.collider.GetComponent<Interactable>();
                    }
                }
                else
                {
                    Debug.Log("interactableObject has been assigned");
                    interactableObject = hit.collider.GetComponent<Interactable>();
                    interactableObject.hitByRayCast = true;
                    interactableObject.LookingAtInteractable();
                }
            }
            else if (interactableObject != null) //if the raycast doesnt hit an interactable object AND there is an interactacbleObject assigned
            {
                interactableObject.hitByRayCast = false; //Stops player from interacting with an object when they're not looking at it.
                Debug.Log("THE PLAYER IS LOOKING AWAY FROM AN INTERACTABLE");
                interactableObject.LookingAtInteractable();
                interactableObject = null;
            }
        }
    }
}
