using UnityEngine;

public class InventoryUI : MonoBehaviour {
    public static InventoryUI inventoryControl;
    public Transform itemsParent;

    public GameObject inventoryUI;
    public GameObject ImageGUI;

    Inventory inventory;

    InventorySlot[] slots;

    public static MouseLook mouseLook; //Making mousLook static ensures that any stats within the Mouselook is saved and transfered between different scenes.
	// Use this for initialization
	void Start () {
        //makes sure theres only one inventory
        if(inventoryControl == null)
        {
            DontDestroyOnLoad(gameObject);
            inventoryControl = this;
        }
        else if(inventoryControl != this){
            Destroy(gameObject);
        }
        inventory = Inventory.instance;
   
        //Within 'Inventory' we trigger 'onItemChangedCallBack' when removing or adding item
        //We also call 'UpdateUI' when removing/adding item
        inventory.onItemChangedCallBack += UpdateUI;

        //Through referencing itemsParent, 
        //Finds all the components within the 'InventorySlot'
        slots = itemsParent.GetComponentsInChildren<InventorySlot>();
        mouseLook = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<MouseLook>(); //The main camera's Mouselook will be assigned to this.
    }
	
	// Update is called once per frame
	void Update () {
        //"If you press the button for "Inventory..."
		if (Input.GetButtonDown("Inventory") && !ImageGUI.activeSelf) //you can only turn on/off the inventory when the image GUI is not present
        {
            //Changes active state of the inventory
            inventoryUI.SetActive(!inventoryUI.activeSelf);
            mouseLook.enabled = !mouseLook.isActiveAndEnabled;
            SetCursorLock(mouseLook.enabled);
        }
        if (!ImageGUI.activeSelf && inventoryUI.activeSelf && Input.GetKeyDown(KeyCode.Escape)) //if the ImageGUI is off and you inventory is on, when you press escape it turns off inventory
        {
            Debug.Log("hello");
            inventoryUI.SetActive(!inventoryUI.activeSelf);
            mouseLook.enabled = !mouseLook.isActiveAndEnabled;
            SetCursorLock(mouseLook.enabled);
        }
        if (ImageGUI.activeSelf && Input.GetKeyDown(KeyCode.Escape)) //if ImageGUI is open...
        {
            ImageGUI.SetActive(false);
        }
	}

    void UpdateUI()
    {
        for(int i = 0; i <slots.Length; i++)
        {
            //Checks if there is space to add items
            if(i < inventory.items.Count)
            {
                //Within the specific slot, add the new item into the 'item' array (found within Inventory)
                slots[i].AddItem(inventory.items[i]);
            }
            else
            {
                //If there is no more items to add, Clears that slot
                slots[i].ClearSlot();
            }
        }
    }
    void SetCursorLock(bool isLocked)
    {
        Cursor.visible = !isLocked;
        if (!isLocked) //if mouseLook script is not active (false)
        {
            Debug.Log("Cursos is free roam");
            Cursor.lockState = CursorLockMode.None;
        }
        if (isLocked) //if mouseLook script is active (true)
        {
            Debug.Log("Cursos is locked");
            Cursor.lockState = CursorLockMode.Locked;
        }
    }
}
