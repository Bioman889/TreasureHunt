using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemPickup : Interactable {
    //We can now access values from C# program 'Item'
    public Item item;

    public bool isKeyItem = false;
    public bool isKaiKey = false;

    public Inventory inventory;

    public override void Interact()
    {

        base.Interact(); //Uses the code within the Interact function

        PickUp();
    }

    void PickUp()
    {

        inventory = GameObject.Find("Canvas").GetComponent<Inventory>();

        if (isKeyItem == true)
        {
            GameVariables.keyCount += 1;
            Debug.Log(GameVariables.keyCount);
        }

        if (isKaiKey == true)
        {
            GameVariables.kaiDoorKey += 1;
            Debug.Log(GameVariables.kaiDoorKey);
        }


        if (Inventory.instance == null)
        {
            Destroy(gameObject);
        }
        Destroy(gameObject);
        inventory.Add(item);
    }
}
