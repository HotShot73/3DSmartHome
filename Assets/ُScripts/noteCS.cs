using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class noteCS : MonoBehaviour {
	public Text noteText;
	public Text noteOutlineText;
	private bool noteShown=true;

	public void NoteButtonClicked ()
	{
		if (!noteShown) {
			noteText.gameObject.SetActive (true);

			//noteOutlineText.text= "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights\n 3- Use UI to turn on the airconditioner \n 4- Use UI to turn on the TV";
			noteShown = true;
			
			
			
			
		} else {
			noteText.text = "";
			//noteOutlineText.text="";
			noteShown = false;
			noteText.gameObject.SetActive (false);
		}
	}
		void Update(){
			if(Scenarios.scenarioNumber=="1"){
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
			}
		if(Scenarios.scenarioNumber=="2"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
		if(Scenarios.scenarioNumber=="3"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
		if(Scenarios.scenarioNumber=="4"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
		if(Scenarios.scenarioNumber=="5"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
		if(Scenarios.scenarioNumber=="6"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
		if(Scenarios.scenarioNumber=="7"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
		if(Scenarios.scenarioNumber=="8"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
		if(Scenarios.scenarioNumber=="9"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
			//noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights\n 3- Use UI to turn on the airconditioner\n 4- Use UI to turn on the TV";
			if(Scenarios.scenarioNumber=="10" || Scenarios.scenarioNumber=="19"){
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the TV";
			}
		if(Scenarios.scenarioNumber=="11"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
			if(Scenarios.scenarioNumber=="12"){
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
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
		if(Scenarios.scenarioNumber=="17"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
			if (Scenarios.scenarioNumber == "18") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the Air Conditioner\n 3- Use UI to turn on the TV";
			}
		if(Scenarios.scenarioNumber=="19"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner\n 5- Use UI to turn on the TV ";
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
		if(Scenarios.scenarioNumber=="25"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
		}
			if (Scenarios.scenarioNumber == "26") {
				noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to close the windows";
			}
		if(Scenarios.scenarioNumber=="27"){
			noteText.text = "Do below tasks in orders:\n 1- Enter the house\n 2- Use UI to turn on the lights \n 3- Use UI to open the windows\n 4- Use UI to turn on the air conditioner";
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
		}
		
	}

