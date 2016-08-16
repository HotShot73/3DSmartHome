#pragma strict
import UnityEngine.UI;
import UnityEngine;

var TVButton : GameObject;
var TVOnButton :GameObject;
var TVOffButton : GameObject;
var LightButton : GameObject;
var LightOnButton :GameObject;
var LightOffButton : GameObject;
var AirConButton : GameObject;
var AirConOnButton :GameObject;
var AirConOffButton : GameObject;
var JalousieButton : GameObject;
var JalousieOnButton : GameObject;
var JalousieOffButton : GameObject;
var FanButton : GameObject;
var FanOnButton :GameObject;
var FanOffButton : GameObject;
var BackButton : GameObject;
var UIBackgroundImage : GameObject;
var rend;
var UI: GameObject;
var UIanimator: Animator;
var UIbutton : GameObject;
UIanimator=UI.GetComponent(Animator);
function BackButtonClicked () {
	

		TVButton.SetActive(true);
		LightButton.SetActive(true);
		//FanButton.SetActive(true);
		AirConButton.SetActive(true);
		BackButton.SetActive(true);
		JalousieButton.SetActive(true);
		FanButton.SetActive(true);
		TVOffButton.SetActive(false);
		TVOnButton.SetActive(false);
		FanOnButton.SetActive(false);
		FanOffButton.SetActive(false);
		LightOnButton.SetActive(false);
		LightOffButton.SetActive(false);
		JalousieOnButton.SetActive(false);
		JalousieOffButton.SetActive(false);
		AirConOnButton.SetActive(false);
		AirConOffButton.SetActive(false);
		//UIanimator.SetTrigger("down");
		//UIbutton.GetComponent(UIButton).UIButtonclicked=false;
		//UIBackgroundImage.SetActive(false);
		//GameObject.Find("UI Button").GetComponent(UIButton).UIButtonclicked=false;
	


}

