using UnityEngine;
using System.Collections;

public class FanOffButton : MonoBehaviour {
	public GameObject fan;
	public GameObject fanOn;
	public GameObject fanOff;
	// Use this for initialization
	void Start () {

	}
	public void OnButtonClicked(){
		fan.GetComponent<Animation> ().Stop ();
		Scenarios.fanIsOn = false;
		Scenarios.timeFanIsOn = 0;
		fanOn.SetActive (false);
		fanOff.SetActive (false);
	}
	// Update is called once per frame
	void Update () {
	
	}
}
