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
	// Use this for initialization
	void Start () {
	
	}

	public void OnButtonClicked(){
		if (Scenarios.scenarioNumber == "17") {
			light1a.SetActive (true);
			light1b.SetActive (true);
			light2a.SetActive (true);
			light2b.SetActive (true);
			Scenarios.timeLightIsOn = 0;
			Scenarios.lightIsOn = true;
			messageContainer.SetActive (false);
		}
		if (Scenarios.scenarioNumber == "18") {
			airconditioner.gameObject.SetActive(false);
			AirConditioner.GetComponent<AudioSource>().Stop();
			Scenarios.airConditionerIsOn = false;
			Scenarios.timeAirConditionerIsOn = 0;
			messageContainer.SetActive (false);
		}
	}
	// Update is called once per frame
	void Update () {
	
	}
}
