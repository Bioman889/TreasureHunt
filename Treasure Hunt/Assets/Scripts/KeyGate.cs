using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyGate : Interactable
{
    public bool isFinalDoor = false;
    public bool isCellDoor = false;
    public override void Interact()
    {
        base.Interact();

        if (GameVariables.kaiDoorKey == 1 && isCellDoor == true)
        {
            Destroy(gameObject);
        }

        if (GameVariables.keyCount == 3 && isFinalDoor == true)
        {
            Destroy(gameObject);
        }
    }
}
