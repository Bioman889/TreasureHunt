using UnityEngine;

[CreateAssetMenu(fileName = "Lever", menuName = "Puzzle Items/Lever")]
public class Lever : ScriptableObject
{
    [Tooltip("Name The type of puzzle")]
    new public string name = "Lever";

    public bool defaultSwitchActive = false; //When this object is created, all switches are defaulted to be off
    //Add any other properties that your lever might need
}
