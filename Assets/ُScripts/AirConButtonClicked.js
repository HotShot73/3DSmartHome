#pragma strict

var AirConOnButton: GameObject;
var AirConOffButton : GameObject;
var BackButton : GameObject;
var LightButton : GameObject;
var TVButton : GameObject;
var FirstPerson: GameObject;
var fan : GameObject;
var aircon: GameObject;
var JalousieButton : GameObject;


function ButtonClicked ()
{	FirstPerson.transform.LookAt(aircon.transform);
	AirConOnButton.SetActive(true);
	AirConOffButton.SetActive(true);
	BackButton.SetActive(true);
//	FanButton.SetActive(false);
	LightButton.SetActive(false);
	TVButton.SetActive(false);
	fan.SetActive(false);
	JalousieButton.SetActive(false);
	GameObject.Find("UI Button").GetComponent(UIButton).UILevel=24;//21 means it is showing TV on off buttons and 22 means it s showing Fan on off button
	//and 23 means it is showing light on off button
}