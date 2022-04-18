using UnityEngine;
using UnityEngine.UI;

/**Tells Unity to create new item
 * 'New Item' when asset is created
 * RMB on Project Panel, create, there is a new category 'inventory' and 'item' in it.
 */
[CreateAssetMenu(fileName = "New Item", menuName = "Inventory/Item")]
//Monobehavior is sitting on a game object
public class Item : ScriptableObject {
    // an object has a name called name
    // using 'new' overrides the old definition
    new public string name = "New Item";
    public string description = "Description of the item's function";
    //This is the icon showing up in our inventory (by default)
    public Sprite icon = null;
    public Sprite FrontImage = null;
    public Sprite BackImage = null;

    public bool isDefaultItem = false;

    public virtual void Use()
    {
        //Use the item
        //Something will occur
        Debug.Log("Using " + name);
    }
}
