using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoatTimer : MonoBehaviour
{
    public float timer;
    public int timeTillEngineStops;
    public GameObject greenLight;
    public GameObject redLight;
    public GameObject realButton;
    public GameObject fakeButton;

    void Update()
    {
        if (timer <= (timeTillEngineStops + 1))
        {
            timer += Time.deltaTime;
        }

        if (timer >= timeTillEngineStops && timer <=(timeTillEngineStops + 1))
        {
            Debug.Log("timer");
            greenLight.SetActive(false);
            redLight.SetActive(true);
            realButton.SetActive(true);
            fakeButton.SetActive(false);
        }
    }
}
