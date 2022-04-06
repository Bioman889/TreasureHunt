using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyItem : MonoBehaviour
{
    
    void OnTriggerEnter(Collider collider) 
    {
        if (collider .gameObject.name == "layer")
        {
            GameVariables.keyCount += 1;
            Destroy(gameObject);
        }
    }

    
}
