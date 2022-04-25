using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideUIElement : MonoBehaviour
{
    public GameObject manualUI;
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            manualUI.SetActive(false);
        }
    }
}
