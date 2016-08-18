﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class noteCS : MonoBehaviour {
	public Text noteText;
	public Text noteOutlineText;
	public bool noteShown;

	public void NoteButtonClicked ()
	{
				if (!noteShown) {
			noteText.gameObject.SetActive(true);
			//noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights\n 3- Use UI to turn on the airconditioner\n 4- Use UI to turn on the TV";
			if(Scenarios.scenarioNumber=="10" || Scenarios.scenarioNumber=="19"){
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the TV";
			}
			if(Scenarios.scenarioNumber=="12"){
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows 4- Use UI to turn on the air conditioner";
			}
			if (Scenarios.scenarioNumber == "13") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the Lights\n 3- Use UI to turn off the Lights";
			}
			if (Scenarios.scenarioNumber == "14") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the air conditioner";
			}
			if (Scenarios.scenarioNumber == "15") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights";
			}
			if (Scenarios.scenarioNumber == "16") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights\n 3- Use UI to turn off the lights";
			}
			if (Scenarios.scenarioNumber == "18") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the Air Conditioner\n 3- Use UI to turn on the TV";
			}
			if (Scenarios.scenarioNumber == "20") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to open the windows";
			}
			if (Scenarios.scenarioNumber == "20") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to open the windows";
			}
			if (Scenarios.scenarioNumber == "21") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights";
			}
			if (Scenarios.scenarioNumber == "22") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the Air Conditioner";
			}
			if (Scenarios.scenarioNumber == "23") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the Air Conditioner";
			}
			if (Scenarios.scenarioNumber == "24") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the TV";
			}
			if (Scenarios.scenarioNumber == "26") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to close the windows";
			}
			if (Scenarios.scenarioNumber == "28") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the TV";
			}
			if (Scenarios.scenarioNumber == "29") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights";
			}
			if (Scenarios.scenarioNumber == "30") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the Air Conditioner";
			}
			if (Scenarios.scenarioNumber == "31") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights\n 3- Use UI to open the windows";
			}
			if (Scenarios.scenarioNumber == "32") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the TV";
			}
			//noteOutlineText.text= "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights\n 3- Use UI to turn on the airconditioner \n 4- Use UI to turn on the TV";
			noteShown= true;
			
			
			
			
		}
		else 
		{
			noteText.text="";
			//noteOutlineText.text="";
			noteShown= false;
			noteText.gameObject.SetActive(false);
		}
		
	}
}
