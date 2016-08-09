using UnityEngine;
using System.Collections;

public class AirConditionerOnButton : MonoBehaviour {
	public ParticleSystem airconditioner;
	public GameObject AirConditioner;
	// Use this for initialization
	void Start () {
	
	}
	public void OnButtonClicked(){
		airconditioner.gameObject.SetActive(true);
		AirConditioner.GetComponent<AudioSource>().Play();
		Scenarios.timeAirConditionerIsOn = 0;
		Scenarios.airConditionerIsOn = true;
	}
	// Update is called once per frame
	void Update () {
		if (Scenarios.airConditionerIsOn) {
			Scenarios.timeAirConditionerIsOn += Time.deltaTime;
		}
	}
}
