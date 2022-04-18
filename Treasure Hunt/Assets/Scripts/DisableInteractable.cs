using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableInteractable : MonoBehaviour
{
    public float timer;
    // Start is called before the first frame update
    void Start()
    {
        //Creates the initial event that turns off interactability on an item.
        Invoke("turnOnInteractability", timer);
    }
    void turnOnInteractability()
    {
        this.GetComponent<Interactable>().enabled = false;
        Debug.Log(this.GetComponent<Interactable>() + ": Turning off the interactability script.");
    }
}
