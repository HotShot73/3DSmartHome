using UnityEngine;
using System.Collections;

public class FanOnButton : MonoBehaviour {
	public GameObject fan;
	public GameObject fanOn;
	public GameObject fanOff;
	// Use this for initialization
	void Start () {
		
	}
	public void OnButtonClicked(){
		fan.GetComponent<Animation> ().Play ();
		Scenarios.fanIsOn = true;
		Scenarios.timeFanIsOn = 0;
		fanOn.SetActive (false);
		fanOff.SetActive (false);
	}
	// Update is called once per frame
	void Update () {
	
	}
}
