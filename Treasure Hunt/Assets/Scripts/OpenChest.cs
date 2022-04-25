using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*Thomas Eichelberger
 * this script is meant to use the interact class Cyrus created to make the chest openable and let the player take what's inside
 */
public class OpenChest : Interactable
{
    public GameObject chestClosed;
    public GameObject chestOpen;
    public override void Interact()
    {
        base.Interact();
        OpenTheChest();
    }

    void OpenTheChest() 
    {
        Debug.Log("the Chest was opened");
        chestClosed.SetActive(false);
        chestOpen.SetActive(true);
    }
}
