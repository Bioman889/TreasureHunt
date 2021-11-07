using UnityEngine;

public class LeverSystem : Interactable
{
    //public Lever lever;
    [Space]
    public int OrderOfSwitch;
    public bool switchActivated;
    public override void Interact()
    {
        base.Interact(); //uses the code within the Interact function

        UseLever();
    }

    void UseLever()
    {

        //it shouldn't destroy the game object but rather changes the value of switch
        //bool flipSwitch = LeverManager.instance.ActivateSwitch(lever);
        //11/6/2021 - We want to create a return value where if it fails, we want to reset every switchActivated to false
        //There's a bug where players can reactivate the switch youve already pulled, we want to change that
        Debug.Log(switchActivated);
        switchActivated = LeverManager.instance.ActivateSwitch(switchActivated, OrderOfSwitch);
    } 
}
