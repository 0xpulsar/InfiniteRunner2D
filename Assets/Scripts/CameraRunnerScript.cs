﻿using UnityEngine;
using System.Collections;

public class CameraRunnerScript : MonoBehaviour {

	// Use this for initialization
	public Transform player;

	
	// Update is called once per frame
	void Update () {
		transform.position = new Vector3 (player.position.x + 6, 0, -10);   
	}
}
