using UnityEngine;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour {

    public Image icon;
    public Button removeButton;
    public Text text;

    public GameObject imageGUI;
    public Image frontImageGUI;
    public Image backImageGUI;

    Item item;

    public void AddItem(Item newItem)
    {
        item = newItem;
        icon.sprite = item.icon;
        icon.enabled = true;
        removeButton.interactable = true;
    }

    public void ClearSlot()
    {
        item = null;

        icon.sprite = null;
        icon.enabled = false;
        removeButton.interactable = false;
    }

    public void OnRemoveButton()
    {
        Inventory.instance.Remove(item);
    }

    public void UseItem()
    {
        if(item != null)
        {
            item.Use();
        }

        frontImageGUI.sprite = item.FrontImage;
        backImageGUI.sprite = item.BackImage;
        if(item.FrontImage != null)
        {
            imageGUI.SetActive(true);
        }
        else if(item.BackImage != null)
        {
            imageGUI.SetActive(true);
        }
    }
    public void DisplayDescription()
    {
        if(item != null)
        {
            text.text = item.description;
        }
    }
    public void RemoveDescription()
    {
        text.text = null;
    }
}
