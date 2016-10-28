
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
	public GameObject ActionMessage;
	public GameObject dialogueMessage;
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
	public GameObject TVOff;
	public GameObject Dialogue;
	// Use this for initialization
	void Start () {
		myTimer = -1;
		int temp5 = Random.Range (1, 32);
		print (temp5);
		print(PlayerPrefs.GetInt("lastScenario"));
		scenarioNumber = temp5.ToString ();
		PlayerPrefs.SetInt ("lastScenario", temp5);

		//print (scenarioNumber);
		//scenarioNumber = temp.ToString ();
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
		// 
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
					 
					 dialogueMessage.GetComponent<Text>().text = "The lamp has been on for " + ((int)timeLightIsOn).ToString () + "seconds";
					Dialogue.SetActive (true);
					myTimer = 25;
				}
			}
			if (duration > -0.9f) {
				
				if (duration > 0)
					duration -= Time.deltaTime;
				else {
					 
					 dialogueMessage.GetComponent<Text>().text = "";
					Dialogue.SetActive (false);
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
					 
					if (duration > 0) {
						duration -= Time.deltaTime;
						if (airConditionerIsOn)
							 dialogueMessage.GetComponent<Text>().text = "The air conditioner is on";
						else
							 dialogueMessage.GetComponent<Text>().text = "The air conditioner is off";
						Dialogue.SetActive (true);
					} else {
						 dialogueMessage.GetComponent<Text>().text = "";
						Dialogue.SetActive (false);
					}
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
					 
					myTimer = 10;
					 
					if(jalousieIsOn)
						 dialogueMessage.GetComponent<Text>().text = "Windows are open";
					else
						 dialogueMessage.GetComponent<Text>().text = "Windows are close";
					Dialogue.SetActive (true);
					counter++;
					duration = 4;
				}

				if (counter == 2 && myTimer<=0) {
					myTimer = 10;
					 
					 dialogueMessage.GetComponent<Text>().text = "TV has been on for " + timeTVIsOn.ToString () + " seconds";
					counter++;
					duration = 4;
				}
				if (counter == 3 && myTimer <= 0) {
					myTimer = -1;
					 
					if(airConditionerIsOn)
						 dialogueMessage.GetComponent<Text>().text = "The air conditioner is on";
					else
						 dialogueMessage.GetComponent<Text>().text = "The air conditioner is off";
					Dialogue.SetActive (true);
					counter++;
					duration = 4;
				}
				if (myTimer > 0) {
					myTimer -= Time.deltaTime;
				}
				if (duration > 0)
					duration -= Time.deltaTime;
				else {
					 dialogueMessage.GetComponent<Text>().text = "";
					Dialogue.SetActive (false);
				}
			}
		}
		if (scenarioNumber == "4") {
			if (myTimer < -0.9f)
				myTimer = 7;
			 
			if (myTimer <= 0) {
				if (lightIsOn && TVIsOn && airConditionerIsOn) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is so high right now";
					Dialogue.SetActive (true);
					duration = 4;
					myTimer = 7;
				}
				if ((lightIsOn && TVIsOn && !airConditionerIsOn) || (lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is high right now";
					Dialogue.SetActive (true);
					duration = 4;
					myTimer = 7;
				}
				if ((lightIsOn && !TVIsOn && !airConditionerIsOn) || (!lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && !airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is low right now";
					Dialogue.SetActive (true);
					duration = 4;
					myTimer = 7;
				}
				if ((!lightIsOn && !TVIsOn && !airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is nearly zero right now";
					Dialogue.SetActive (true);
					duration = 4;
					myTimer = 7;
				}
			} else
				myTimer -= Time.deltaTime;
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "5") {
			 
			if (myTimer < -0.9f)
				myTimer = 10;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "The room is on fire!!! run away!!!";
				Dialogue.SetActive (true);
			}
		}
		if (scenarioNumber == "6") {
			if (myTimer < -0.9f)
				myTimer = 10;
			 
			if (myTimer <= 0) {
				if (lightIsOn && TVIsOn && airConditionerIsOn) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is nearly zero right now";
					Dialogue.SetActive (true);
					duration = 5;

				}
				if ((lightIsOn && TVIsOn && !airConditionerIsOn) || (lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is low right now";
					Dialogue.SetActive (true);
					duration = 4;

				}
				if ((lightIsOn && !TVIsOn && !airConditionerIsOn) || (!lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && !airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is high right now!";
					Dialogue.SetActive (true);
					duration = 4;

				}
				if ((!lightIsOn && !TVIsOn && !airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is very high right now!";
					Dialogue.SetActive (true);
					duration = 4;

				}
			} else
				myTimer -= Time.deltaTime;
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "7") {
			if (myTimer < -0.9f)
				myTimer = 8;
			if (myTimer <= 0) {
				if (!jalousieIsOn) {
					 dialogueMessage.GetComponent<Text>().text = " Windows are open and this will cause in waste of energy.";
					Dialogue.SetActive (true);
					myTimer = 8;
					duration = 5;
				}
			}
			else
				myTimer -= Time.deltaTime;
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "8") {
			
			if (myTimer < -0.9f)
				myTimer = 8;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "The room is on fire!!! run away!!!";
				Dialogue.SetActive (true);
				myTimer = 8;
				duration = 4;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
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
				 dialogueMessage.GetComponent<Text>().text = "electricity usage is " + totalUsage.ToString() +" watts right now.";
				Dialogue.SetActive (true);
				duration = 4;
				myTimer = -1;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "10") {
			if (TVIsOn && counter==0) {
				 dialogueMessage.GetComponent<Text>().text = "The systems suggests you to close the window and turn off some of the lights";
				Dialogue.SetActive (true);
				duration = 4;
				counter = 1;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
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
				 dialogueMessage.GetComponent<Text>().text = "electricity usage is " + totalUsage.ToString() +" watts right now.";
				Dialogue.SetActive (true);
				duration = 4;
				myTimer = 8;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "12") {
			if (lightIsOn && duration<1.2f) {
				 dialogueMessage.GetComponent<Text>().text = "System suggests you to turn off the lights since it's day and the light level is quite alright";
				Dialogue.SetActive (true);
				duration = 4;
				done1 = true;
			}
			if (airConditionerIsOn && duration<1.2f) {
				 dialogueMessage.GetComponent<Text>().text = "System suggests you to turn off the air conditioner since the temperature is pleasant.";
				Dialogue.SetActive (true);
				duration = 4;
				done1 = true;
			}
			if (jalousieIsOn && duration<1.2f) {
				 dialogueMessage.GetComponent<Text>().text = "System suggests you to close the window in order to prevent wasting of energy.";
				Dialogue.SetActive (true);
				duration = 4;
				done1 = true;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "13") {
			if (lightIsOn)
				temp = true;
			if (!lightIsOn && temp) {
				 dialogueMessage.GetComponent<Text>().text = "If you don't turn off the lights you will use 8KWh more electricity monthly.";
				Dialogue.SetActive (true);
				duration = 5;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "14") {
			if (airConditionerIsOn) {
				 dialogueMessage.GetComponent<Text>().text = "Systems suggests you to turn the air conditioner on";
				Dialogue.SetActive (true);
				duration = 5;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "15") {
			if (lightIsOn) {
				if (myTimer <= 0) {
					 dialogueMessage.GetComponent<Text>().text = " System suggests you to turn on the lights";
					Dialogue.SetActive (true);
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
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
				duration = 6;
				if(counter!=0)
				myTimer = 5;
			}
		}
		if (scenarioNumber == "16") {
			if (!lightIsOn && temp) {
				if (myTimer <= 0) {
					 dialogueMessage.GetComponent<Text>().text = " System suggests you to turn off the lights";
					Dialogue.SetActive (true);
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
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
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
			ActionMessage.GetComponent<Text>().text ="Light level is not enough. Would you like to turn on the lights?";
			Dialogue.SetActive (true);
		}
		if (scenarioNumber == "18") {
			
			if (TVIsOn && airConditionerIsOn) {
				if (counter == 0) {
					messageContainer.SetActive (true);
					counter = 1;
				}
				ActionMessage.GetComponent<Text>().text ="Air Conditioner is making a lot of noises. Would you like to turn it off?";

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
						ActionMessage.GetComponent<Text> ().text = "Shall I turn off the lights?";

						myTimer = 8;
						counter++;
					} else {
						if (counter == 1 && !isMessageContainerActive) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							ActionMessage.GetComponent<Text> ().text = "Shall I turn off the Air Conditioner?";

							myTimer = 8;
							counter++;
						} else {
							if (counter == 2 && !isMessageContainerActive) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								ActionMessage.GetComponent<Text> ().text = "Shall I close the windows?";

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
					ActionMessage.GetComponent<Text> ().text = "Weather is getting hot. Shall I turn on the fan?";

					myTimer = 8;
					counter++;
				}
				if (counter == 1 && !isMessageContainerActive) {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					ActionMessage.GetComponent<Text> ().text = "Shall I turn on the Air Conditioner?";

					myTimer = 8;
					counter++;
				}
				if (counter == 2 && !isMessageContainerActive) {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					ActionMessage.GetComponent<Text> ().text = "In order to save energy system suggests you to close the window. shall I close them?";

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
					ActionMessage.GetComponent<Text> ().text = "The light level is quite sufficient. Shall I turn off the lights?";
				
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
					ActionMessage.GetComponent<Text> ().text = "The temperature is quite pleasant. Shall I turn the Air Conditioner off?";

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
						ActionMessage.GetComponent<Text> ().text = "Shall I open the windows?";

						myTimer = 8;
						counter++;
					} else {
						if (counter == 1) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							ActionMessage.GetComponent<Text> ().text = "Shall I turn the Air Conditioner on?";

							myTimer = 8;
							counter++;
						} else {
							if (counter == 2) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								ActionMessage.GetComponent<Text> ().text = "Shall I turn the Fan on?";

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
						ActionMessage.GetComponent<Text> ().text = "Shall I turn the fan on?";

						myTimer = 8;
						counter++;
					} else {
						if (counter == 1) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							ActionMessage.GetComponent<Text> ().text = "Shall I turn the Air Conditioner on?";

							myTimer = 8;
							counter++;
						} else {
							if (counter == 2) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								ActionMessage.GetComponent<Text> ().text = "Shall I turn the lights on?";

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
					 dialogueMessage.GetComponent<Text>().text = "It was getting warm after closing the windows so system decided to turn the Air Conditioner on";

					duration = 6;
				}
			}
			if (duration > 0) {
				duration -= Time.deltaTime;
			} else {
				duration = 6;
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "27") {
			if (myTimer == -1) 
				myTimer = 5;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				if (counter == 0) {
					light1a.SetActive (true);
					light1b.SetActive (true);
					light2a.SetActive (true);
					light2b.SetActive (true);
					timeLightIsOn = 0;
					duration = 5;
					myTimer = 10;
					 dialogueMessage.GetComponent<Text>().text = "Light level is not enough therefore system decided to turn on the lights";
					Dialogue.SetActive (true);
					lightIsOn = true;
					counter++;
				} else {
					if (counter == 1) {
						TV.SetActive (true);
						TVIsOn = true;
						timeTVIsOn = 0;
						duration = 5;
						myTimer = 10;
						 dialogueMessage.GetComponent<Text>().text = "The match between FC Barcelona and Real Madrid starts in 5 minutes!";
						Dialogue.SetActive (true);
						counter++;
					} else {
						if (counter == 2) {
							jalousie1.GetComponent<Animation>()["roller1_half_up"].speed= 1;
							jalousie1.GetComponent<Animation>().Play();
							jalousie2.GetComponent<Animation>()["roller_half_up"].speed= 1;
							jalousie2.GetComponent<Animation>().Play();
							jalousieIsOn = true;
							timeJalousieIsOn = 0;
							duration = 5;
							myTimer = 10;
							 dialogueMessage.GetComponent<Text>().text = "The weather is quite good outside therefore system decided to open the windows";
							Dialogue.SetActive (true);
							counter++;
						}
					}
				}
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "28") {
			if (myTimer == -1) {
				myTimer = 5;
				light1a.SetActive (true);
				light1b.SetActive (true);
				light2a.SetActive (true);
				light2b.SetActive (true);
				timeLightIsOn = 0;
				lightIsOn = true;
				jalousie1.GetComponent<Animation>()["roller1_half_up"].speed= 1;
				jalousie1.GetComponent<Animation>().Play();
				jalousie2.GetComponent<Animation>()["roller_half_up"].speed= 1;
				jalousie2.GetComponent<Animation>().Play();
				jalousieIsOn = true;
				timeJalousieIsOn = 0;
			}
			if (TVIsOn) {
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				
					if (counter == 0) {
						light1a.SetActive (false);
						light1b.SetActive (false);
						light2a.SetActive (false);
						light2b.SetActive (false);
						lightIsOn = false;
						timeLightIsOn = 0;
						duration = 5;
						myTimer = 10;
						if (!lightIsOn) {
							 dialogueMessage.GetComponent<Text>().text = "System decided to turn off the lights for better movie watching experience";
							Dialogue.SetActive (true);
						}
						counter++;
					} else {
						if (counter == 1) {
							airconditioner.gameObject.SetActive (true);
							AirConditioner.GetComponent<AudioSource> ().Play ();
							airConditionerIsOn = true;
							timeAirConditionerIsOn = 0;
							duration = 5;
							myTimer = 10;
							 dialogueMessage.GetComponent<Text>().text = "The weather is getting warm therefore system turned the Air Conditioner on!";
							Dialogue.SetActive (true);
							counter++;
						} else {
							if (counter == 2) {
								jalousie1.GetComponent<Animation> () ["roller1_half_up"].speed = -1;
								jalousie1.GetComponent<Animation> ().Play ();
								jalousie2.GetComponent<Animation> () ["roller_half_up"].speed = -1;
								jalousie2.GetComponent<Animation> ().Play ();
								jalousieIsOn = false;
								timeJalousieIsOn = 0;
								duration = 5;
								myTimer = 10;
								 dialogueMessage.GetComponent<Text>().text = "It's quite noisy outside therefore system decided to close the windows";
								Dialogue.SetActive (true);
								counter++;
							}
						}
					}
				}
				if (duration > 0)
					duration -= Time.deltaTime;
				else {
					 dialogueMessage.GetComponent<Text>().text = "";
					Dialogue.SetActive (false);
				}
			}
		}
		if (scenarioNumber == "29") {
			if (myTimer == -1) 
				myTimer = 5;
			if (lightIsOn) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else {
					light1a.SetActive (false);
					light1b.SetActive (false);
					light2a.SetActive (false);
					light2b.SetActive (false);
					lightIsOn = false;
					timeLightIsOn = 0;
					duration = 5;
					 dialogueMessage.GetComponent<Text>().text = "Light level is quite sufficient therefore system decided to turn off the lights";
					Dialogue.SetActive (true);
				}
				if (duration > 0)
					duration -= Time.deltaTime;
				else {
					 dialogueMessage.GetComponent<Text>().text = "";
					Dialogue.SetActive (false);
				}
			}
		}
		if (scenarioNumber == "30") {
			if (myTimer == -1) 
				myTimer = 5;
			if (airConditionerIsOn) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else {
					airconditioner.gameObject.SetActive (false);
					AirConditioner.GetComponent<AudioSource> ().Stop ();
					airConditionerIsOn = false;
					timeAirConditionerIsOn = 0;
					duration = 5;
					 dialogueMessage.GetComponent<Text>().text = "Weather is quite good. There is no need for Air Conditioner";
					Dialogue.SetActive (true);

				}
				if (duration > 0)
					duration -= Time.deltaTime;
				else {	
					 dialogueMessage.GetComponent<Text>().text = "";
					Dialogue.SetActive (false);
				}
			}
		}
		if (scenarioNumber == "31") {
			if (lightIsOn && jalousieIsOn)
				temp = true;
			if (myTimer == -1) 
				myTimer = 5;
			if (myTimer > 0) {
				if(temp)
				myTimer -= Time.deltaTime;
			}
			else {

				if (lightIsOn) {
					light1a.SetActive (false);
					light1b.SetActive (false);
					light2a.SetActive (false);
					light2b.SetActive (false);
					lightIsOn = false;
					timeLightIsOn = 0;
					duration = 5;
					myTimer = 10;
					if (!lightIsOn) {
						 dialogueMessage.GetComponent<Text>().text = "System decided to turn off the lights because the light level is quite sufficient";
						Dialogue.SetActive (true);
					}

					counter++;
				} else {
					if (counter == 1) {
						TV.SetActive (true);
						TVIsOn = true;
						timeTVIsOn = 0;
						duration = 5;
						myTimer = 10;
						 dialogueMessage.GetComponent<Text>().text = "Game of Thrones is on TV now!";
						Dialogue.SetActive (true);
						counter++;
					} else {
						if (counter == 2) {
							jalousie1.GetComponent<Animation> () ["roller1_half_up"].speed = -1;
							jalousie1.GetComponent<Animation> ().Play ();
							jalousie2.GetComponent<Animation> () ["roller_half_up"].speed = -1;
							jalousie2.GetComponent<Animation> ().Play ();
							jalousieIsOn = false;
							timeJalousieIsOn = 0;
							duration = 5;
							myTimer = 10;
							 dialogueMessage.GetComponent<Text>().text = "Weather is cold outside";
							Dialogue.SetActive (true);
							counter++;
						}
					}
				}
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		
		}
		if (scenarioNumber == "32") {
			if (myTimer == -1) 
				myTimer = 5;
			if(TVIsOn){
			if (myTimer > 0) {
				
					myTimer -= Time.deltaTime;
			}

			else {
				
					if (counter == 0) {
						fan.GetComponent<Animation> ().Play ();
					duration = 5;
					myTimer = 10;
						 dialogueMessage.GetComponent<Text>().text = "Weather is getting warm so system decided to turn on the fan";
						Dialogue.SetActive (true);

					counter++;
				} else {
					if (counter == 1) {
							jalousie1.GetComponent<Animation> () ["roller1_half_up"].speed = 1;
							jalousie1.GetComponent<Animation> ().Play ();
							jalousie2.GetComponent<Animation> () ["roller_half_up"].speed = 1;
							jalousie2.GetComponent<Animation> ().Play ();
							jalousieIsOn = true;
							timeJalousieIsOn = 0;
							duration = 5;
							myTimer = 10;
							 dialogueMessage.GetComponent<Text>().text = "Weather is pleasant outside so system decided to open the windows.";
							Dialogue.SetActive (true);
							counter++;
					} else {
						if (counter == 2) {
								TV.SetActive (false);
								TVOff.SetActive (true);
								TVIsOn = true;
								timeTVIsOn = 0;
								duration = 5;
								myTimer = 10;
								 dialogueMessage.GetComponent<Text>().text = "You are using so much electricity so system decided to turn the tv off!";
								Dialogue.SetActive (true);
							counter++;
						}
					}
				}

			}
				if (duration > 0)
					duration -= Time.deltaTime;
				else {
					 dialogueMessage.GetComponent<Text>().text = "";
					Dialogue.SetActive (false);
				}
			}
		}
		totalTimer += Time.deltaTime;
	}

}
