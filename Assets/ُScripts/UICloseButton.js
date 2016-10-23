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
var Button : GameObject;
UIButtonclicked = false; 
var thisButton: GameObject;
var UI: GameObject;
var UIanimator: Animator;
var temp =60;
var shouldCount = false;
UIanimator=UI.GetComponent(Animator);


function UIbuttonclicked () {
	
	TVOnButton.SetActive(false);
		TVOnButton.SetActive(false);
		TVOffButton.SetActive(false);
		FanOnButton.SetActive(false);
		FanOffButton.SetActive(false);
		LightOnButton.SetActive(false);
		LightOffButton.SetActive(false);
		JalousieOnButton.SetActive(false);
		JalousieOffButton.SetActive(false);
		//LightButton.SetActive(false);
		//TVButton.SetActive(false);
		//AirConButton.SetActive(false);
		//FanButton.SetActive(false);
		//BackButton.SetActive(false);

		//thisButton.SetActive(false);
		//UIBackgroundImage.SetActive(false);
		UIanimator.SetTrigger("down");
		UIButtonclicked=false;
		shouldCount = true;
		//InvokeRepeating(
		//setTimeout(function(){
		//Button.SetActive(true);
		//},2000);
			
		

}
function Update(){
if(shouldCount)
temp-=Time.deltaTime;
if(temp<=0){
	Button.SetActive(true);
	shouldCount = false;
	temp = 60;
}
//print(temp);
}