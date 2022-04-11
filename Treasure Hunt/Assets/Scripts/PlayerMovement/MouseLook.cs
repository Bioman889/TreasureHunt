using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
 *Lines 44-50 
 * Draws a gizmo to show how far a player can interact with the world around them
 */
public class MouseLook : MonoBehaviour
{
    [RangeAttribute(1, 600)]
    [Tooltip("Editable mouse sensitivity to look around.")]
    public float mouseSensitivity = 100f;

    [Tooltip("Assign a player to control")]
    public Transform playerBody;
    
    [RangeAttribute(1,20)]
    [Tooltip("How far a player has to be to interact with interactables")]
    public float range = 50f;

    float xRotation = 0f;

    public Camera cam;
    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
    }

    // Update is called once per frame
    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime; //used for the movement of entire player body
        float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;

        xRotation -= mouseY;
        xRotation = Mathf.Clamp(xRotation, -90f, 90f); //Prevents overrotation where player rotates their head all the way behind them in the y-axis

        transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
        playerBody.Rotate(Vector3.up * mouseX);

        Debug.DrawRay(cam.transform.position, cam.transform.forward * range, Color.red);
        RaycastHit hit;
        if(Physics.Raycast(cam.transform.position, cam.transform.forward, out hit, range))
        {
            Debug.Log(hit.transform.name);
        }
    }
}
