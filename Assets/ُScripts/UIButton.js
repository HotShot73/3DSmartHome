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
var UIanimator: Animator;
UIanimator=UI.GetComponent(Animator);


function UIbuttonclicked () {
	print(UILevel);
	if ((!UIButtonclicked) )
	{
		

		AirConButton.SetActive(true);
		TVButton.SetActive(true);
		BackButton.SetActive(true);
		LightButton.SetActive(true);
		JalousieButton.SetActive(true);

		//FanButton.SetActive(true);

		//UIBackgroundImage.SetActive(true);
		UIButtonclicked=true;
		UIanimator.SetTrigger("Up");
	}
	else if ((UIButtonclicked) )
	{ 
	TVOnButton.SetActive(false);
		TVOffButton.SetActive(false);
		FanOnButton.SetActive(false);
		FanOffButton.SetActive(false);
		LightOnButton.SetActive(false);
		LightOnButton.SetActive(false);
		JalousieOnButton.SetActive(false);
		JalousieOffButton.SetActive(false);
		//LightButton.SetActive(false);
		//TVButton.SetActive(false);
		//AirConButton.SetActive(false);
		//FanButton.SetActive(false);
		//BackButton.SetActive(false);
		
		//UIBackgroundImage.SetActive(false);
		UIanimator.SetTrigger("down");
		UIButtonclicked=false;
		
	}

}