using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public void LoadtheGame()
    {
        SceneManager.LoadScene("IslandScene");
    }

    public void EndTheGame()
    {
        Application.Quit();
    }
}
