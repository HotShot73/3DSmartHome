using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Threading;

public class Scenarios : MonoBehaviour {
	public static string scenarioNumber ="";
	private Text message;
	private float myTimer=-1.0f;
	private int numberOfTimes=0;
	private float totalTimer=0.0f;
	private float duration = -1.0f;
	public static bool windowIsOpen = false;
	public static bool airConditionerIsOn = false;
	public static bool TVIsOn = false;
	public static bool lightIsOn = false;
	public static bool jalousieIsOn = false;
	public static bool fanIsOn = false;
	public static float timeWindowIsOpen =0;
	public static float timeTVIsOn = 0;
	public static float timeAirConditionerIsOn = 0;
	public static float timeLightIsOn = 0;
	public static float timeJalousieIsOn =0;
	public static float timeFanIsOn =0;
	public GameObject messageContainer;
	private bool done1 = false;
	private bool done2 = false;
	private bool done3 = false;
	private bool temp = false;
	public static int counter=0;
	public static bool isMessageContainerActive=false;
	public GameObject light1a;
	public GameObject light2a;
	public GameObject light2b;
	public GameObject light1b;
	public ParticleSystem airconditioner;
	public GameObject AirConditioner;
	public AudioClip audioOn; 
	public GameObject TV;
	public GameObject jalousie1;
	public GameObject jalousie2;
	public GameObject fan;
	// Use this for initialization
	void Start () {
		myTimer = -1;
	}
	
	// Update is called once per frame
	void Update () {
		if (airConditionerIsOn) {
			timeAirConditionerIsOn += Time.deltaTime;
		}
		if (lightIsOn) {
			timeLightIsOn += Time.deltaTime;
		}
		if (jalousieIsOn) {
			timeJalousieIsOn += Time.deltaTime;
		}
		if (TVIsOn) {
			timeTVIsOn += Time.deltaTime;
		}
		if (fanIsOn) {
			timeFanIsOn += Time.deltaTime;
		}
		message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
		//print (scenarioNumber);
		if (scenarioNumber == "1") {
			//Scenario1 ();
			if (numberOfTimes == 0) {
				myTimer = 25.0f;
				numberOfTimes++;
			}
			if (myTimer > -0.9f) {
				if (myTimer > 0) {
					myTimer -= Time.deltaTime;
				} else {
					duration = 3.0f;
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					message.text = "The lamp has been on for " + ((int)timeLightIsOn).ToString () + "seconds";
					myTimer = 25;
				}
			}
			if (duration > -0.9f) {
				
				if (duration > 0)
					duration -= Time.deltaTime;
				else {
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					message.text = "";
					duration = -1;
				}
			}
		}
		if (scenarioNumber == "2") {
			
			if (myTimer > -0.9f) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else{
					if (counter == 0) {
						duration = 3;
						counter++;
					}
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					if (duration > 0) {
						duration -= Time.deltaTime;
						if (airConditionerIsOn)
							message.text = "The air conditioner is on";
						else
							message.text = "The air conditioner is off";
					} else
						message.text = "";
				}
			} else {
				myTimer = 15;
			}
		}
		if (scenarioNumber == "3") {
			if (counter == 0) {
				myTimer = 10;
				counter++;
			}
			else {
				if (counter == 1 && myTimer<=0) {
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					myTimer = 10;
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					if(jalousieIsOn)
						message.text = "Windows are open";
					else
						message.text = "Windows are close";
					counter++;
					duration = 4;
				}

				if (counter == 2 && myTimer<=0) {
					myTimer = 10;
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					message.text = "TV has been on for " + timeTVIsOn.ToString () + " seconds";
					counter++;
					duration = 4;
				}
				if (counter == 3 && myTimer <= 0) {
					myTimer = -1;
					message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
					if(airConditionerIsOn)
						message.text = "The air conditioner is on";
					else
						message.text = "The air conditioner is off";
					counter++;
					duration = 4;
				}
				if (myTimer > 0) {
					myTimer -= Time.deltaTime;
				}
				if (duration > 0)
					duration -= Time.deltaTime;
				else
					message.text = "";
			}
		}
		if (scenarioNumber == "4") {
			if (myTimer < -0.9f)
				myTimer = 7;
			message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
			if (myTimer <= 0) {
				if (lightIsOn && TVIsOn && airConditionerIsOn) {
					message.text = "The electricity usage is so high right now";
					duration = 4;
					myTimer = 7;
				}
				if ((lightIsOn && TVIsOn && !airConditionerIsOn) || (lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && airConditionerIsOn)) {
					message.text = "The electricity usage is high right now";
					duration = 4;
					myTimer = 7;
				}
				if ((lightIsOn && !TVIsOn && !airConditionerIsOn) || (!lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && !airConditionerIsOn)) {
					message.text = "The electricity usage is low right now";
					duration = 4;
					myTimer = 7;
				}
				if ((!lightIsOn && !TVIsOn && !airConditionerIsOn)) {
					message.text = "The electricity usage is nearly zero right now";
					duration = 4;
					myTimer = 7;
				}
			} else
				myTimer -= Time.deltaTime;
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "5") {
			message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
			if (myTimer < -0.9f)
				myTimer = 10;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				message.text = "The room is on fire!!! run away!!!";
			}
		}
		if (scenarioNumber == "6") {
			if (myTimer < -0.9f)
				myTimer = 10;
			message = GameObject.FindGameObjectsWithTag ("Messages") [0].GetComponent<Text> ();
			if (myTimer <= 0) {
				if (lightIsOn && TVIsOn && airConditionerIsOn) {
					message.text = "The electricity usage is nearly zero right now";
					duration = 5;

				}
				if ((lightIsOn && TVIsOn && !airConditionerIsOn) || (lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && airConditionerIsOn)) {
					message.text = "The electricity usage is low right now";
					duration = 4;

				}
				if ((lightIsOn && !TVIsOn && !airConditionerIsOn) || (!lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && !airConditionerIsOn)) {
					message.text = "The electricity usage is high right now!";
					duration = 4;

				}
				if ((!lightIsOn && !TVIsOn && !airConditionerIsOn)) {
					message.text = "The electricity usage is very high right now!";
					duration = 4;

				}
			} else
				myTimer -= Time.deltaTime;
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "7") {
			if (myTimer < -0.9f)
				myTimer = 8;
			if (myTimer <= 0) {
				if (!jalousieIsOn) {
					message.text = " Windows are open and this will cause in waste of energy.";
					myTimer = 8;
					duration = 5;
				}
			}
			else
				myTimer -= Time.deltaTime;
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "8") {
			
			if (myTimer < -0.9f)
				myTimer = 8;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				message.text = "The room is on fire!!! run away!!!";
				myTimer = 8;
				duration = 4;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "9") {
			if (myTimer < -0.9f)
				myTimer = 10;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				float totalUsage = 0;
				if (TVIsOn)
					totalUsage += 100;
				if (airConditionerIsOn)
					totalUsage += 150;
				if (lightIsOn)
					totalUsage += 100;
				message.text = "electricity usage is " + totalUsage.ToString() +" watts right now.";
				duration = 4;
				myTimer = -1;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "10") {
			if (TVIsOn && counter==0) {
				message.text = "The systems suggests you to close the window and turn off some of the lights";
				duration = 4;
				counter = 1;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
			if (!TVIsOn)
				counter = 0;
		}
		if (scenarioNumber == "11") {
			if (myTimer < -0.9f)
				myTimer = 8;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				float totalUsage = 0;
				if (TVIsOn)
					totalUsage += 100;
				if (airConditionerIsOn)
					totalUsage += 150;
				if (lightIsOn)
					totalUsage += 100;
				message.text = "electricity usage is " + totalUsage.ToString() +" watts right now.";
				duration = 4;
				myTimer = 8;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "12") {
			if (lightIsOn && duration<1.2f) {
				message.text = "System suggests you to turn off the lights since it's day and the light level is quite alright";
				duration = 4;
				done1 = true;
			}
			if (airConditionerIsOn && duration<1.2f) {
				message.text = "System suggests you to turn off the air conditioner since the temperature is pleasant.";
				duration = 4;
				done1 = true;
			}
			if (jalousieIsOn && duration<1.2f) {
				message.text = "System suggests you to close the window in order to prevent wasting of energy.";
				duration = 4;
				done1 = true;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "13") {
			if (lightIsOn)
				temp = true;
			if (!lightIsOn && temp) {
				message.text = "If you don't turn off the lights you will use 8KWh more electricity monthly.";
				duration = 5;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "14") {
			if (airConditionerIsOn) {
				message.text = "Systems suggests you to turn the air conditioner on";
				duration = 5;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else
				message.text = "";
		}
		if (scenarioNumber == "15") {
			if (lightIsOn) {
				if (myTimer <= 0) {
					message.text = " System suggests you to turn on the lights";
					duration = 4;
					myTimer = 5;
					counter = 1;
				} else
					myTimer -= Time.deltaTime;
			}
			if (duration > 0) {
				duration -= Time.deltaTime;
				counter = 2;
			}
			else {
				message.text = "";
				duration = 6;
				if(counter!=0)
				myTimer = 5;
			}
		}
		if (scenarioNumber == "16") {
			if (!lightIsOn && temp) {
				if (myTimer <= 0) {
					message.text = " System suggests you to turn off the lights";
					duration = 4;
					myTimer = 5;
					counter = 1;
				} else
					myTimer -= Time.deltaTime;
			}
			if (lightIsOn) {
				temp = true;;
			}
			if (duration > 0) {
				duration -= Time.deltaTime;
				counter = 2;
			}
			else {
				message.text = "";
				duration = 6;
				if(counter!=0)
					myTimer = 5;
			}
		}
		if (scenarioNumber == "17") {
			if (myTimer == -1)
				myTimer = 13;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else{
				if (counter == 0) {
					messageContainer.SetActive (true);
					counter = 1;
				}
				}
			GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text>().text ="Light level is not enough. Would you like to turn on the lights?";
		}
		if (scenarioNumber == "18") {
			
			if (TVIsOn && airConditionerIsOn) {
				if (counter == 0) {
					messageContainer.SetActive (true);
					counter = 1;
				}
				GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text>().text ="Air Conditioner is making a lot of noises. Would you like to turn it off?";
			}
		}
		if (scenarioNumber == "19") {
			if (myTimer == -1)
				myTimer = 5;
			if (myTimer > 0 && TVIsOn && !isMessageContainerActive)
				myTimer -= Time.deltaTime;
			else {
				if (TVIsOn) {
					if (counter == 0) {
						messageContainer.SetActive (true);
						isMessageContainerActive = true;
						GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I turn off the lights?";
						myTimer = 8;
						counter++;
					} else {
						if (counter == 1 && !isMessageContainerActive) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I turn off the Air Conditioner?";
							myTimer = 8;
							counter++;
						} else {
							if (counter == 2 && !isMessageContainerActive) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I close the windows?";
								myTimer = 8;
								counter++;
							}
						}
					}
				}
			}
		}
		if (scenarioNumber == "20") {
			if (myTimer == -1)
				myTimer = 13;
			if (myTimer <= 0) {
				if (counter == 0) {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Weather is getting hot. Shall I turn on the fan?";
					myTimer = 8;
					counter++;
				}
				if (counter == 1 && !isMessageContainerActive) {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I turn on the Air Conditioner?";
					myTimer = 8;
					counter++;
				}
				if (counter == 2 && !isMessageContainerActive) {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "In order to save energy system suggests you to close the window. shall I close them?";
					myTimer = 8;
					counter++;
				}
			} else
				if(!isMessageContainerActive)
					myTimer -= Time.deltaTime;
		}
		if (scenarioNumber == "21") {
			if (myTimer == -1)
				myTimer = 5;
			if (lightIsOn) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "The light level is quite sufficient. Shall I turn off the lights?";
					myTimer = 8;
					counter++;
				}
			}
		}
		if (scenarioNumber == "22") {
			if (myTimer == -1)
				myTimer = 5;
			if (airConditionerIsOn) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "The temperature is quite pleasant. Shall I turn the Air Conditioner off?";
					myTimer = 8;
					counter++;
				}
			}
		}
		if (scenarioNumber == "23") {
			if (myTimer == -1)
				myTimer = 5;
			if (airConditionerIsOn) {
				
				if (myTimer > 0) {
					if (!isMessageContainerActive)
						myTimer -= Time.deltaTime;
				}
				else {
					if (counter == 0) {
						messageContainer.SetActive (true);
						isMessageContainerActive = true;
						GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I open the windows?";
						myTimer = 8;
						counter++;
					} else {
						if (counter == 1) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I turn the Air Conditioner on?";
							myTimer = 8;
							counter++;
						} else {
							if (counter == 2) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I turn the Fan on?";
								myTimer = 8;
								counter++;
							}
						}
					}
				}
			}
		}
		if (scenarioNumber == "24") {
			if (myTimer == -1)
				myTimer = 5;
			if (TVIsOn) {
				
				if (myTimer > 0) {
					if (!isMessageContainerActive)
						myTimer -= Time.deltaTime;
				}
				else {
					if (counter == 0) {
						messageContainer.SetActive (true);
						isMessageContainerActive = true;
						GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I turn the fan on?";
						myTimer = 8;
						counter++;
					} else {
						if (counter == 1) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I turn the Air Conditioner on?";
							myTimer = 8;
							counter++;
						} else {
							if (counter == 2) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								GameObject.FindGameObjectsWithTag ("ActionMessage") [0].GetComponent<Text> ().text = "Shall I turn the lights on?";
								myTimer = 8;
								counter++;
							}
						}
					}
				}
			}
		}
		if (scenarioNumber == "25") {
			if (myTimer == -1)
				myTimer = 10;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				light1a.SetActive (true);
				light1b.SetActive (true);
				light2a.SetActive (true);
				light2b.SetActive (true);
				timeLightIsOn = 0;
				lightIsOn = true;

			}
		}
		if (scenarioNumber == "26") {
			
				if (myTimer == -1) {
					myTimer = 5;
					jalousie1.GetComponent<Animation>()["roller1_half_up"].speed= 1;
					jalousie1.GetComponent<Animation>().Play();
					jalousie2.GetComponent<Animation>()["roller_half_up"].speed= 1;
					jalousie2.GetComponent<Animation>().Play();
					Scenarios.jalousieIsOn = true;
					Scenarios.timeJalousieIsOn = 0;
				}
			if (!jalousieIsOn) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else {
					airconditioner.gameObject.SetActive(true);
					AirConditioner.GetComponent<AudioSource>().Play();
					airConditionerIsOn = true;
					timeAirConditionerIsOn = 0;
					message.text = "It was getting warm after closing the windows so system decided to turn the Air Conditioner on";
					duration = 6;
				}
			}
			if (duration > 0) {
				duration -= Time.deltaTime;
			} else {
				duration = 6;
				message.text = "";
			}
		}
		if (scenarioNumber == "27") {
			
		}
		totalTimer += Time.deltaTime;
	}

}
