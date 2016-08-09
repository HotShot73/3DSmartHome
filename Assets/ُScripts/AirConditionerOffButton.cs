using UnityEngine;
using System.Collections;

public class AirConditionerOffButton : MonoBehaviour {
	public ParticleSystem airconditioner;
	public GameObject AirConditioner;
	// Use this for initialization
	void Start () {

	}
	public void OnButtonClicked(){
		airconditioner.gameObject.SetActive(false);
		AirConditioner.GetComponent<AudioSource>().Stop();
		Scenarios.airConditionerIsOn = false;
		Scenarios.timeAirConditionerIsOn = 0;
	}
	// Update is called once per frame
	void Update () {
	
	}
}
