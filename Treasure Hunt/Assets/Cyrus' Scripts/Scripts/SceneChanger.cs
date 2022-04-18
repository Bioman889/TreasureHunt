using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChanger : MonoBehaviour
{
    [Tooltip("Input the EXACT name of the scene it will change into")]
    public string nameOfScene;
    public int newSpawnPoint;
    private void OnTriggerEnter(Collider other)
    {
        GameVariables.currentSpawnPoint = newSpawnPoint;
        if (other.gameObject.CompareTag("Player"))
        {
            SceneManager.LoadScene(nameOfScene);
        }
    }
}
