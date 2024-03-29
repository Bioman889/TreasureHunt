﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Interactable : MonoBehaviour
{
    [SerializeField]
    private Text pickUpText;
    public InventoryUI inventoryUI;

    private bool pickUpAllowed;

    public bool hitByRayCast;
    //public Transform interactionTransform;

    // Use this for initialization

    private void Awake()
    {
        inventoryUI = GameObject.Find("Canvas").GetComponent<InventoryUI>();
        pickUpText = inventoryUI.interactText;
    }

    public virtual void Interact()
    {
        //this is meant to be overwritten
        Debug.Log("Interacting with " + transform.name);
    }

    // Update is called once per frame
    void Update()
    {

        if (pickUpAllowed && Input.GetKeyDown(KeyCode.E))
        {
            pickUpText.gameObject.SetActive(false);
            Interact();
            //PickUp();
        }
    }

    private void OnTriggerEnter(Collider collision)
    {

        if (collision.gameObject.name.Equals("Player"))
        {
            pickUpText.gameObject.SetActive(true);
            pickUpAllowed = true;
        }
    }
    private void OnTriggerExit(Collider collision)
    {

        if (collision.gameObject.name.Equals("Player"))
        {
            pickUpText.gameObject.SetActive(false);
            pickUpAllowed = false;
        }
    }

    public void LookingAtInteractable()
    {
        pickUpText.gameObject.SetActive(hitByRayCast);
        pickUpAllowed = hitByRayCast;
    }
    /**
    private void PickUp()
    {
        Destroy(gameObject);
    }
    */
}