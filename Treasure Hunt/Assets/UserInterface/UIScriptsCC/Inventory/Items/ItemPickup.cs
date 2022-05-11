using UnityEngine;

public class ItemPickup : Interactable {
    //We can now access values from C# program 'Item'
    public Item item;

    public bool isKeyItem = false;
    public bool isKaiKey = false;


    public override void Interact()
    {
        base.Interact(); //Uses the code within the Interact function

        PickUp();
    }

    void PickUp()
    {
        Debug.Log("Picking up "+ item.name);
        bool wasPickedUp = Inventory.instance.Add(item);

        if (wasPickedUp == true)
        {
            Destroy(gameObject);
        }
        
        
        if (isKeyItem == true) 
        {
            GameVariables.keyCount += 1;
        }

        if (isKaiKey == true)
        {
            GameVariables.kaiDoorKey += 1;
        }

    }
}
