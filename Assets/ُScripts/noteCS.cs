using UnityEngine;
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
			if(Scenarios.scenarioNumber=="10"){
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
