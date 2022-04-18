using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WheelInteractable : Interactable {
    // Start is called before the first frame update
    public override void Interact()
    {
        base.Interact();

        changeLevel();
    }

    void changeLevel()
    {
        SceneManager.LoadScene("IslandScene");
    }
}
