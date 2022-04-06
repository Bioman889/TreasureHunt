using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyGate : MonoBehaviour
{
    void OnTriggerEnter(Collider collider)
    {
        Debug.Log("player Entered");
        Debug.Log(GameVariables.keyCount);

        if (collider.gameObject.name == "Player" && GameVariables.keyCount>0)
        {
            GameVariables.keyCount--;
            Destroy(gameObject);
        }
    }
}
