using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class NoteClose : MonoBehaviour {
	public Text noteText;
	public Text noteOutlineText;
	private bool noteShown=true;
	public Image backImage;
	public GameObject button;
	// Use this for initialization
	void Start () {
	
	}
	public void NoteButtonClicked ()
	{
		
		noteText.text = "";
		//noteOutlineText.text="";
		noteShown = false;
		noteText.gameObject.SetActive (false);
		backImage.gameObject.SetActive (false);
		this.gameObject.SetActive (false);
	
	}
	// Update is called once per frame
	void Update () {
	
	}
}
