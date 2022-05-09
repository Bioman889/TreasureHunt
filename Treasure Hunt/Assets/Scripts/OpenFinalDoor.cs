using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenFinalDoor : Interactable
{
    public GameObject finalDoor;
    public override void Interact()
    {
        base.Interact();

        if (GameVariables.keyCount <= 3)
        {
            finalDoor.SetActive(false);
        }
    }
}
