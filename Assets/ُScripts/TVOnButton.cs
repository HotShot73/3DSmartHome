using UnityEngine;
using System.Collections;

public class TVOnButton : MonoBehaviour {
	public GameObject tvOn;
	public GameObject tvOff;
	public AudioClip audioOn; 
	public GameObject TV;
	// Use this for initialization
	void Start () {
	
	}
	public void OnButtonClicked(){
		TV.GetComponent<AudioSource>().loop = true;
		TV.GetComponent<AudioSource>().clip = audioOn;
		TV.GetComponent<AudioSource>().Play ();
		tvOff.SetActive (false);
		tvOn.SetActive (true);
		Scenarios.TVIsOn = true;
		Scenarios.timeTVIsOn = 0;
	}
	// Update is called once per frame
	void Update () {
		if (Scenarios.TVIsOn)
			Scenarios.timeTVIsOn += Time.deltaTime;
	}
}
