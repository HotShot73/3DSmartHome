using UnityEngine;
using System.Collections;

public class TVOffButton : MonoBehaviour {
	public GameObject tvOn;
	public GameObject tvOff;
	public GameObject TV;
	// Use this for initialization
	void Start () {

	}
	public void OnButtonClicked(){
		TV.GetComponent<AudioSource>().Stop ();
		tvOn.SetActive (false);
		tvOff.SetActive (true);
		Scenarios.TVIsOn = false;
		Scenarios.timeTVIsOn = 0;
	}
	// Update is called once per frame
	void Update () {
	
	}
}
