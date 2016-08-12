using UnityEngine;
using System.Collections;

public class NoButton : MonoBehaviour {

	public GameObject messageContainer;
	// Use this for initialization
	void Start () {
	
	}
	public void OnButtonClicked(){
		GameObject.FindGameObjectsWithTag ("MessageContainer") [0].SetActive (false);
	}
	// Update is called once per frame
	void Update () {
	
	}
}
