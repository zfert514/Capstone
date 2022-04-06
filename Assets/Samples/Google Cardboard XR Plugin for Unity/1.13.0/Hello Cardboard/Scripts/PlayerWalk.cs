using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWalk : MonoBehaviour
{
    public int playerSpeed;
    public bool isWalking = false;
    public double holdTime = 2.0;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButton("Fire1"))
        {
            print("working");
            if (Google.XR.Cardboard.Api.IsTriggerPressed)
            {
                isWalking = !isWalking;
            }
            if (isWalking)
            {
                transform.position = transform.position + Camera.main.transform.forward * playerSpeed * Time.deltaTime;
            }
        }
    }
}
