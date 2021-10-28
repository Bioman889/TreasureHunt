using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StateCheck : MonoBehaviour
{
    //the bools for both states of walking and climbing
    public bool normal;
    public bool climb; 

    void Start()
    {
        //makes sure the player can climb
        normal = true;
        climb = false;
    }

    // what this code does is shift states between normal and climbing
    void Update()
    {
        if (Input.GetKeyDown("e") && normal == true) {
            normal = false;
            climb = true;
        }
        else if (Input.GetKeyDown("e") && climb == true){
            normal = true;
            climb = false;
        }

        if (normal == true) {
            //movement states for walking around
        }

        if (climb == true) {
            //the up and down for climbing
        }

        Debug.Log("Normal is " + normal);
        Debug.Log("Climb is " + climb);
    }
}
