using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSpawnManager : MonoBehaviour
{
    public GameObject player;

    Vector3 DockSpawn = new Vector3(197, 15, 243); //0
    Vector3 JamesSpawn = new Vector3(71, 17, 197); //1
    Vector3 CyrusSpawn = new Vector3(-109, 31, -136); //2
    Vector3 SnakePitSpawn = new Vector3(-100, 11, -71); //3
    Vector3 FinalLevelSpawn = new Vector3(-184, 22, -83); //4
    Vector3 KaiLevelSpawn = new Vector3(10, 12, -55); //5
    Vector3 BoarLevelSpawn = new Vector3(-30, 54, 214); //6

    // Start is called before the first frame update
    void Awake()
    {
        if (GameVariables.currentSpawnPoint == 0)
        {
            GameObject.Instantiate(player, DockSpawn, Quaternion.identity);
        }
        else if (GameVariables.currentSpawnPoint == 1)
        {
            GameObject.Instantiate(player, JamesSpawn, Quaternion.identity);
        }
        else if (GameVariables.currentSpawnPoint == 2)
        {
            GameObject.Instantiate(player, CyrusSpawn, Quaternion.identity);
        }
        else if (GameVariables.currentSpawnPoint == 3)
        {
            GameObject.Instantiate(player, SnakePitSpawn, Quaternion.identity);
        }
        else if (GameVariables.currentSpawnPoint == 4)
        {
            GameObject.Instantiate(player, FinalLevelSpawn, Quaternion.identity);
        }
        else if (GameVariables.currentSpawnPoint == 5)
        {
            GameObject.Instantiate(player, KaiLevelSpawn, Quaternion.identity);
        }
        else if (GameVariables.currentSpawnPoint == 6)
        {
            GameObject.Instantiate(player, BoarLevelSpawn, Quaternion.identity);
        }
    }
}
