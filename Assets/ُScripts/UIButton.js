 #pragma strict
import UnityEngine.UI;

var UILevel : int = 1 ;
var TVButton : GameObject;
var TVOnButton :GameObject;
var TVOffButton : GameObject;
var FanButton : GameObject;
var FanOnButton :GameObject;
var FanOffButton : GameObject;
var LightButton : GameObject;
var LightOnButton :GameObject;
var LightOffButton : GameObject;
var BackButton : GameObject;
var UIButtonclicked : boolean;
var UIBackgroundImage : GameObject;
var AirConButton : GameObject;
var AirConOnButton :GameObject;
var JalousieButton : GameObject;
var JalousieOnButton : GameObject;
var JalousieOffButton : GameObject;
var AirConOffButton : GameObject;
var UIOn : boolean = false;
UIButtonclicked = false; 
var UI: GameObject;
var Button: GameObject;
var thisButton: GameObject;
var UIanimator: Animator;
UIanimator=UI.GetComponent(Animator);


function UIbuttonclicked () {
	

		AirConButton.SetActive(true);
		TVButton.SetActive(true);
		BackButton.SetActive(true);
		LightButton.SetActive(true);
		JalousieButton.SetActive(true);
		Button.SetActive(true);
		//FanButton.SetActive(true);
		thisButton.SetActive(false);
		//UIBackgroundImage.SetActive(true);
		UIButtonclicked=true;
		UIanimator.SetTrigger("Up");
	


}