using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq; //Organizes list

public class LeverManager : Interactable
{
    public static LeverManager instance;
    #region Singleton
    void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("More than one instance of LeverManager found!");

        }
        /** Instance equals to this components.
        * 
        *  We will be able to access this component 
        *  by using "inventory.instance"
        *  
        *  This means that we can only have 1 Inverntory at ALL TIMES
        */
        instance = this;

    }
    #endregion

    [Header("Custom Order")]
    public List<GameObject> switches; //Lists if changing the size of the array. If fixed number of elements, use arrays.
    public GameObject Door;
    public GameObject Light1;
    public GameObject Light2;
    public GameObject fakeWheel;
    public GameObject realWheel;
    [Space]
    public int currentSwitch; //Variable for what switch needs to be pulled
    [Tooltip("Amount of time until you can pull another switch")]
    public float waitForPullingSwitch;
    public bool isDoor;
    public bool isLight;

    //Task: Create 5 Levers in different orders
    //Levers must be interacted by pressing e
    //Levers will display message if they are pressed in the right order or not 

    // Start is called before the first frame update
    void Start()
    {
        //Line organizes the array based on switch component "OrderOfSwitch"
        //From: https://answers.unity.com/questions/855088/sorting-a-list-of-gameobjects-by-accessing-their-i.html
        switches = switches.OrderBy(x=>x.GetComponent<LeverSystem>().OrderOfSwitch).ToList();
    }

    // Update is called once per frame
    void Update()
    {
        //What should be on a state of update: When you press the correct switch, the switch-that-needs-to-be-pulled variable should increase within the list. 
        //switches[0].GetComponent<LeverSystem>().OrderOfSwitch = 
    }

    //In this function, it takes two parameters that compares whether the switch being interacted on is the correct switch within the next sequence
    //If it's the wrong switch, then it resets the sequence and turns all switches off
    //return the value if lever in the right order is correct or not
    public bool ActivateSwitch(bool lever, int orderOfLever)
    {
        if(orderOfLever != currentSwitch) //if the lever you're referencing is not the one that the current switch is looking for... it will not turn on the lever
        { 
            currentSwitch = 0; //resets the sequence you need to pull the switch
            foreach (GameObject ActivatedSwitch in switches) //This loop will turn off ALL the levers.
            {
                ActivatedSwitch.GetComponent<LeverSystem>().switchActivated = false;
                Debug.Log("The switch is " + ActivatedSwitch.name + ActivatedSwitch.GetComponent<LeverSystem>().switchActivated);
            }
            Debug.Log("The switch in which you have pulled in sequence is incorrect");
            //return lever; This script caused a bug because if you interacted with a switch thats already on(lever == true) then this code will switch the bool to true again after turning it off in the previous code
            return false; 
        }
        currentSwitch++; //increments current switch onto the next sequence within the list
        lever = !lever; //activates switch
        Debug.Log("Switching the lever to " + lever);

        if(switches.Count <= currentSwitch)//When all switches are activated...
        {
            AllSwitchesActivated();
        }
        return lever;
    }
    //Function that runs when all switches are activated in sequence
    public void AllSwitchesActivated()
    {
        if (isDoor == true)
        {
            Debug.Log("All switches are activated");
            Door.SetActive(false); //We can change replace this by having a script where the door is animated to open
        }
        if (isLight == true)
        {
            Debug.Log("All switches are activated");
            Light1.SetActive(false);
            Light2.SetActive(true);

            fakeWheel.SetActive(false);
            realWheel.SetActive(true);
        }
    }
}
