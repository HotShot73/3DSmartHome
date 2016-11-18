using UnityEngine;
using System.Collections;

public class YesButton : MonoBehaviour {
	public GameObject light1a;
	public GameObject light2a;
	public GameObject light2b;
	public GameObject light1b;
	public ParticleSystem airconditioner;
	public GameObject AirConditioner;
	public GameObject messageContainer;
	public AudioClip audioOn; 
	public GameObject TV;
	public GameObject jalousie1;
	public GameObject jalousie2;
	public GameObject fan;
	public static bool hasClicked=false;
	// Use this for initialization
	void Start () {

	}

	public void OnButtonClicked(){
		hasClicked = true;
		if (Scenarios.scenarioNumber == "17") {
			light1a.SetActive (true);
			light1b.SetActive (true);
			light2a.SetActive (true);
			light2b.SetActive (true);
			Scenarios.timeLightIsOn = 0;
			Scenarios.lightIsOn = true;
			messageContainer.SetActive (false);
			Scenarios.isMessageContainerActive = false;
		}
		if (Scenarios.scenarioNumber == "18") {
			airconditioner.gameObject.SetActive(false);
			AirConditioner.GetComponent<AudioSource>().Stop();
			Scenarios.airConditionerIsOn = false;
			Scenarios.timeAirConditionerIsOn = 0;
			messageContainer.SetActive (false);
			Scenarios.isMessageContainerActive = false;
		}
		if (Scenarios.scenarioNumber == "19") {
			if (Scenarios.counter == 1) {
				light1a.SetActive (false);
				light1b.SetActive (false);
				light2a.SetActive (false);
				light2b.SetActive (false);
				Scenarios.timeLightIsOn = 0;
				Scenarios.lightIsOn = false;
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}
			if (Scenarios.counter == 2) {
				airconditioner.gameObject.SetActive(false);
				AirConditioner.GetComponent<AudioSource>().Stop();
				Scenarios.airConditionerIsOn = false;
				Scenarios.timeAirConditionerIsOn = 0;
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}
			if (Scenarios.counter == 3) {
				jalousie1.GetComponent<Animation>()["roller1_half_up"].speed= -1;
				jalousie1.GetComponent<Animation>().Play();
				jalousie2.GetComponent<Animation>()["roller_half_up"].speed= -1;
				jalousie2.GetComponent<Animation>().Play();
				Scenarios.jalousieIsOn = false;
				Scenarios.timeJalousieIsOn = 0;
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}

		}
		if (Scenarios.scenarioNumber == "20") {
			if (Scenarios.counter == 1) {
				fan.GetComponent<Animation> ().Play ();
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;

			}
			if (Scenarios.counter == 2) {
				airconditioner.gameObject.SetActive(true);
				AirConditioner.GetComponent<AudioSource>().Play();
				Scenarios.airConditionerIsOn = true;
				Scenarios.timeAirConditionerIsOn = 0;
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}
			if (Scenarios.counter == 3) {
				jalousie1.GetComponent<Animation>()["roller1_half_up"].speed= -1;
				jalousie1.GetComponent<Animation>().Play();
				jalousie2.GetComponent<Animation>()["roller_half_up"].speed= -1;
				jalousie2.GetComponent<Animation>().Play();
				Scenarios.jalousieIsOn = false;
				Scenarios.timeJalousieIsOn = 0;
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}	
		}
		if (Scenarios.scenarioNumber == "21") {
			light1a.SetActive (false);
			light1b.SetActive (false);
			light2a.SetActive (false);
			light2b.SetActive (false);
			Scenarios.timeLightIsOn = 0;
			Scenarios.lightIsOn = false;
			messageContainer.SetActive (false);
			Scenarios.isMessageContainerActive = false;
		}
		if (Scenarios.scenarioNumber == "22") {
			airconditioner.gameObject.SetActive(false);
			AirConditioner.GetComponent<AudioSource>().Stop();
			Scenarios.airConditionerIsOn = false;
			Scenarios.timeAirConditionerIsOn = 0;
			messageContainer.SetActive (false);
			Scenarios.isMessageContainerActive = false;
		}
		if (Scenarios.scenarioNumber == "23") {
			if (Scenarios.counter == 1) {
				jalousie1.GetComponent<Animation>()["roller1_half_up"].speed= 1;
				jalousie1.GetComponent<Animation>().Play();
				jalousie2.GetComponent<Animation>()["roller_half_up"].speed= 1;
				jalousie2.GetComponent<Animation>().Play();
				Scenarios.jalousieIsOn = true;
				Scenarios.timeJalousieIsOn = 0;
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;

			}
			if (Scenarios.counter == 2) {
				
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}
			if (Scenarios.counter == 3) {
				fan.GetComponent<Animation> ().Play ();
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}	
		}
		if (Scenarios.scenarioNumber == "24") {
			if (Scenarios.counter == 1) {
				fan.GetComponent<Animation> ().Play ();
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;

			}
			if (Scenarios.counter == 2) {
				airconditioner.gameObject.SetActive(true);
				AirConditioner.GetComponent<AudioSource>().Play();
				Scenarios.airConditionerIsOn = true;
				Scenarios.timeAirConditionerIsOn = 0;
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}
			if (Scenarios.counter == 3) {
				light1a.SetActive (true);
				light1b.SetActive (true);
				light2a.SetActive (true);
				light2b.SetActive (true);
				Scenarios.timeLightIsOn = 0;
				Scenarios.lightIsOn = true;
				messageContainer.SetActive (false);
				Scenarios.isMessageContainerActive = false;
			}	
		}
	}
	// Update is called once per frame
	void Update () {
		
	}
}
