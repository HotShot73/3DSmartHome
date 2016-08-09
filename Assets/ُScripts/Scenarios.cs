﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Threading;

public class Scenarios : MonoBehaviour {
	public static string scenarioNumber ="";
	private Text message;
	private float myTimer=-1.0f;
	private int numberOfTimes=0;
	private float totalTimer=0.0f;
	private float duration = -1.0f;
	public static bool windowIsOpen = false;
	public static bool airConditionerIsOn = false;
	public static bool TVIsOn = false;
	public static bool lightIsOn = false;
	public static bool jalousieIsOn = false;
	public static float timeWindowIsOpen =0;
	public static float timeTVIsOn = 0;
	public static float timeAirConditionerIsOn = 0;
	public static float timeLightIsOn = 0;
	public static float timeJalousieIsOn =0;
	private int counter=0;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		//print (scenarioNumber);
		if (scenarioNumber == "1") {
			//Scenario1 ();
			if (numberOfTimes == 0) {
				myTimer = 25.0f;
				numberOfTimes++;
			}
			if (myTimer > -0.9f) {
				if (myTimer > 0) {
					myTimer -= Time.deltaTime;
				} else {
					duration = 3.0f;
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					message.text = "The lamp has been on for " + ((int)timeLightIsOn).ToString () + "seconds";
					myTimer = 25;
				}
			}
			if (duration > -0.9f) {
				
				if (duration > 0)
					duration -= Time.deltaTime;
				else {
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					message.text = "";
					duration = -1;
				}
			}
		}
		if (scenarioNumber == "2") {
			
			if (myTimer > -0.9f) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else{
					if (counter == 0) {
						duration = 3;
						counter++;
					}
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					if (duration > 0) {
						duration -= Time.deltaTime;
						if (airConditionerIsOn)
							message.text = "The air conditioner is on";
						else
							message.text = "The air conditioner is off";
					} else
						message.text = "";
				}
			} else {
				myTimer = 15;
			}
		}
		if (scenarioNumber == "3") {
			if (counter == 0) {
				myTimer = 10;
				counter++;
			}
			else {
				if (counter == 1 && myTimer<=0) {
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					myTimer = 10;
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					if(jalousieIsOn)
						message.text = "Windows are open";
					else
						message.text = "Windows are close";
					counter++;
					duration = 4;
				}

				if (counter == 2 && myTimer<=0) {
					myTimer = 10;
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					message.text = "TV has been on for " + timeTVIsOn.ToString () + " seconds";
					counter++;
					duration = 4;
				}
				if (counter == 3 && myTimer <= 0) {
					myTimer = -1;
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					if(airConditionerIsOn)
						message.text = "The air conditioner is on";
					else
						message.text = "The air conditioner is off";
					counter++;
					duration = 4;
				}
				if (myTimer > 0) {
					myTimer -= Time.deltaTime;
				}
				if (duration > 0)
					duration -= Time.deltaTime;
				else
					message.text = "";
			}
		}
		totalTimer += Time.deltaTime;
	}

}
