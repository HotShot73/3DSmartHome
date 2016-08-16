using UnityEngine;
using System.Collections;

public class NoButton : MonoBehaviour {

	public GameObject messageContainer;
	// Use this for initialization
	void Start () {
	
	}
	public void OnButtonClicked(){
		messageContainer.SetActive (false);
		Scenarios.isMessageContainerActive = false;
	}
	// Update is called once per frame
	void Update () {
	
	}
}
