using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ManualInteract : Interactable
{
    public GameObject manualUI;
    public Button closeButton;

    public override void Interact()
    {
        base.Interact();
        manualUI.SetActive(true);
        closeButton.gameObject.SetActive(true);
    }
}
