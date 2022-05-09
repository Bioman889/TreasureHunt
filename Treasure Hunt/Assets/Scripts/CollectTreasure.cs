using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectTreasure : Interactable
{
    public GameObject exitDoor;
    public GameObject treasure;
    // Start is called before the first frame update
    public override void Interact()
    {
        base.Interact();

        GameVariables.treasureCollected += 1;
        exitDoor.SetActive(false);
        treasure.SetActive(false);
    }
}
