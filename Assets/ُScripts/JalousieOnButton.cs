using UnityEngine;
using System.Collections;

public class JalousieOnButton : MonoBehaviour {
	public GameObject jalousieOn;
	public GameObject jalousieOff;
	public GameObject jalousie1;
	public GameObject jalousie2;
	// Use this for initialization
	void Start () {
	
	}
	public void OnButtonClicked(){
		//jalousieOn.SetActive (true);
		//jalousieOff.SetActive (true);
		AudioSource sounds = jalousie1.GetComponent<AudioSource>();
		AudioSource sounds2 = jalousie2.GetComponent<AudioSource>();
		//			//FanOnSwitch = sounds[0];
		//			jalousieUpSound=sounds[0];
		//			jalousie2UpSound=sounds2[0];
		//			FanOnSwitch.Play();
		jalousie1.GetComponent<Animation>()["roller1_half_up"].speed= 1;
		jalousie1.GetComponent<Animation>().Play();
		jalousie2.GetComponent<Animation>()["roller_half_up"].speed= 1;
		jalousie2.GetComponent<Animation>().Play();
		Scenarios.jalousieIsOn = true;
		Scenarios.timeJalousieIsOn = 0;
		//sounds[0].GetComponent<AudioSource>().Play();
	}
	// Update is called once per frame
	void Update () {
		if (Scenarios.jalousieIsOn)
			Scenarios.timeJalousieIsOn += Time.deltaTime;
	}
}
