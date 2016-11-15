
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Threading;
using System.Runtime.InteropServices;
using UnityEngine.SceneManagement;

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
	public GameObject lastMessageContainer;
	public GameObject ActionMessage;
	public GameObject dialogueMessage;
	private bool done1 = false;
	private bool done2 = false;
	private bool done3 = false;
	private bool temp = false;
	private bool[] taskStates = new bool[5];
	private int numberOfTasks = 0;
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
	public GameObject LastMessage;
	public float lastTimer=0;
	private int sceneNumber=0;
	private bool allDone = true;
	[DllImport("__Internal")]
	private static extern void Hello();
	private bool chert = false;
	[DllImport("__Internal")]
	private static extern void HelloString(string str);

	// Use this for initialization
	void Start () {
		myTimer = -1;
		int temp5 = Random.Range (1, 32);
		print (temp5);
		if (PlayerPrefs.GetInt ("ScenarioNumber") != 2) {
			
			scenarioNumber = "19";

			PlayerPrefs.SetInt ("lastScenario", temp5);
			PlayerPrefs.SetInt("ScenarioNumber",2);
		} else {
			if(PlayerPrefs.GetInt ("lastScenario")%2 == 0)
				scenarioNumber = (PlayerPrefs.GetInt ("lastScenario")-1).ToString();
			else
				scenarioNumber = (PlayerPrefs.GetInt ("lastScenario")+1).ToString();
			PlayerPrefs.SetInt("ScenarioNumber",0);
		}
		totalTimer = 0.0f;
		//if (PlayerPrefs.GetInt ("ScenarioNumber") == 0) {
		//	HelloString (scenarioNumber);
		//}
		//print (scenarioNumber);
		//scenarioNumber = temp.ToString ();
	}
	
	// Update is called once per frame
	void Update () {
		print (PlayerPrefs.GetInt("ScenarioNumber"));
		for (int i = 0; i < numberOfTasks; i++) {
			if (!taskStates [i]) {
				allDone = false;
				break;
			}
			allDone = true;
				}
		print(scenarioNumber);
		if (totalTimer >= 60f && allDone) {
			lastTimer += Time.deltaTime;
			if (PlayerPrefs.GetInt ("ScenarioNumber") == 2) {
				lastMessageContainer.SetActive (true);
				LastMessage.GetComponent<Text> ().text = "Get ready for the next scenario!";
			} else {
				lastMessageContainer.SetActive (true);
				LastMessage.GetComponent<Text> ().text = "This part is over. Please click on the questionnaire link in order to fill out the questionnaire";
			}
			//SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex);
		}
		if (lastTimer > 6) {
			if (PlayerPrefs.GetInt ("ScenarioNumber") == 2) {
				SceneManager.LoadScene (SceneManager.GetActiveScene ().buildIndex);
			}
		}
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
			numberOfTasks = 1;
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
					taskStates [0] = true;
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
			numberOfTasks = 1;
			if (myTimer > -0.9f) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else{
					if (counter == 0) {
						duration = 3;
						counter++;
					}
					 
					if (duration > 0) {
						taskStates [0] = true;
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
			numberOfTasks = 3;
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
					taskStates [0] = true;
					duration = 4;
				}

				if (counter == 2 && myTimer<=0) {
					myTimer = 10;
					 
					 dialogueMessage.GetComponent<Text>().text = "TV has been on for " + timeTVIsOn.ToString () + " seconds";
					counter++;
					duration = 4;
					taskStates [1] = true;
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
					taskStates [2] = true;
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
			numberOfTasks = 3;
			if (myTimer < -0.9f)
				myTimer = 7;
			 
			if (myTimer <= 0) {
				if (lightIsOn && TVIsOn && airConditionerIsOn) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is so high right now";
					Dialogue.SetActive (true);
					duration = 4;
					taskStates [2] = true;
					myTimer = 7;
				}
				if ((lightIsOn && TVIsOn && !airConditionerIsOn) || (lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is high right now";
					Dialogue.SetActive (true);
					duration = 4;
					taskStates [1] = true;
					myTimer = 7;
				}
				if ((lightIsOn && !TVIsOn && !airConditionerIsOn) || (!lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && !airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is low right now";
					Dialogue.SetActive (true);
					duration = 4;
					taskStates [0] = true;
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
			numberOfTasks = 1;
			if (myTimer < -0.9f)
				myTimer = 10;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "The room is on fire!!! run away!!!";
				Dialogue.SetActive (true);
				taskStates [0] = true;
			}
		}
		if (scenarioNumber == "6") {
			numberOfTasks = 3;
			if (myTimer < -0.9f)
				myTimer = 10;
			 
			if (myTimer <= 0) {
				if (lightIsOn && TVIsOn && airConditionerIsOn) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is nearly zero right now";
					Dialogue.SetActive (true);
					duration = 5;
					taskStates [2] = true;

				}
				if ((lightIsOn && TVIsOn && !airConditionerIsOn) || (lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is low right now";
					Dialogue.SetActive (true);
					duration = 4;
					taskStates [1] = true;

				}
				if ((lightIsOn && !TVIsOn && !airConditionerIsOn) || (!lightIsOn && !TVIsOn && airConditionerIsOn) || (!lightIsOn && TVIsOn && !airConditionerIsOn)) {
					 dialogueMessage.GetComponent<Text>().text = "The electricity usage is high right now!";
					Dialogue.SetActive (true);
					duration = 4;
					taskStates [0] = true;

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
			numberOfTasks = 3;
			if (myTimer < -0.9f)
				myTimer = 8;
			if (myTimer <= 0) {
				if (!jalousieIsOn) {
					taskStates [0] = true;
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
			numberOfTasks = 1;
			if (myTimer < -0.9f)
				myTimer = 8;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "The room is on fire!!! run away!!!";
				Dialogue.SetActive (true);
				taskStates [0] = true;
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
			numberOfTasks = 1;
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
				taskStates [0] = true;
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
			numberOfTasks = 1;
			if (TVIsOn && counter==0) {
				 dialogueMessage.GetComponent<Text>().text = "The systems suggests you to close the window and turn off some of the lights";
				taskStates [0] = true;
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
			numberOfTasks = 1;
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
				taskStates [0] = true;
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
			numberOfTasks = 3;
			if (lightIsOn && duration<1.2f) {
				 dialogueMessage.GetComponent<Text>().text = "System suggests you to turn off the lights since it's day and the light level is quite alright";
				Dialogue.SetActive (true);
				duration = 4;
				done1 = true;
				taskStates [0] = true;
			}
			if (airConditionerIsOn && duration<1.2f) {
				 dialogueMessage.GetComponent<Text>().text = "System suggests you to turn off the air conditioner since the temperature is pleasant.";
				Dialogue.SetActive (true);
				duration = 4;
				done1 = true;
				taskStates [1] = true;
			}
			if (jalousieIsOn && duration<1.2f) {
				 dialogueMessage.GetComponent<Text>().text = "System suggests you to close the window in order to prevent wasting of energy.";
				Dialogue.SetActive (true);
				duration = 4;
				done1 = true;
				taskStates [2] = true;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
			}
		}
		if (scenarioNumber == "13") {
			numberOfTasks = 1;
			if (lightIsOn)
				temp = true;
			if (!lightIsOn && temp) {
				
				 dialogueMessage.GetComponent<Text>().text = "If you don't turn off the lights you will use 8KWh more electricity monthly.";
				taskStates [0] = true;
				Dialogue.SetActive (true);
				duration = 5;
				chert = true;

			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
				chert = false;
			}
		}
		if (scenarioNumber == "14") {
			numberOfTasks = 1;
			if (airConditionerIsOn) {
				 dialogueMessage.GetComponent<Text>().text = "Systems suggests you to turn the air conditioner on";
				taskStates [1] = true;
				Dialogue.SetActive (true);
				duration = 5;
				chert = true;
			}
			if (duration > 0)
				duration -= Time.deltaTime;
			else {
				 dialogueMessage.GetComponent<Text>().text = "";
				Dialogue.SetActive (false);
				chert = false;
			}
		}
		if (scenarioNumber == "15") {
			numberOfTasks = 1;
			if (lightIsOn) {
				if (myTimer <= 0) {
					 dialogueMessage.GetComponent<Text>().text = " System suggests you to turn on the lights";
					taskStates [0] = true;
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
			numberOfTasks = 1;
			if (!lightIsOn && temp) {
				if (myTimer <= 0) {
					 dialogueMessage.GetComponent<Text>().text = " System suggests you to turn off the lights";
					taskStates [0] = true;
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
			numberOfTasks = 1;
			if (myTimer == -1)
				myTimer = 13;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else{
				if (counter == 0) {
					messageContainer.SetActive (true);
					counter = 1;
					taskStates [0] = true;
				}
				}
			ActionMessage.GetComponent<Text>().text ="Light level is not enough. Would you like to turn on the lights?";
			Dialogue.SetActive (true);
		}
		if (scenarioNumber == "18") {
			numberOfTasks = 1;
			if (TVIsOn && airConditionerIsOn) {
				if (counter == 0) {
					messageContainer.SetActive (true);
					counter = 1;
					taskStates [0] = true;
				}
				ActionMessage.GetComponent<Text>().text ="Air Conditioner is making a lot of noises. Would you like to turn it off?";

			}
		}
		if (scenarioNumber == "19") {
			numberOfTasks = 3;
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
						taskStates [0] = true;

						myTimer = 8;
						counter++;
					} else {
						if (counter == 1 && !isMessageContainerActive) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							ActionMessage.GetComponent<Text> ().text = "Shall I turn off the Air Conditioner?";
							taskStates [1] = true;
							myTimer = 8;
							counter++;
						} else {
							if (counter == 2 && !isMessageContainerActive) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								ActionMessage.GetComponent<Text> ().text = "Shall I close the windows?";
								taskStates [2] = true;
								myTimer = 8;
								counter++;
							}
						}
					}
				}
			}
		}
		if (scenarioNumber == "20") {
			numberOfTasks = 3;
			if (myTimer == -1)
				myTimer = 13;
			if (myTimer <= 0) {
				if (counter == 0) {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					taskStates [0] = true;
					ActionMessage.GetComponent<Text> ().text = "Weather is getting hot. Shall I turn on the fan?";

					myTimer = 8;
					counter++;
				}
				if (counter == 1 && !isMessageContainerActive) {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					taskStates [1] = true;
					ActionMessage.GetComponent<Text> ().text = "Shall I turn on the Air Conditioner?";

					myTimer = 8;
					counter++;
				}
				if (counter == 2 && !isMessageContainerActive) {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					taskStates [2] = true;
					ActionMessage.GetComponent<Text> ().text = "In order to save energy system suggests you to close the window. shall I close them?";

					myTimer = 8;
					counter++;
				}
			} else
				if(!isMessageContainerActive)
					myTimer -= Time.deltaTime;
		}
		if (scenarioNumber == "21") {
			numberOfTasks = 1;
			if (myTimer == -1)
				myTimer = 5;
			if (lightIsOn) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else {
					messageContainer.SetActive (true);
					taskStates [0] = true;
					isMessageContainerActive = true;
					ActionMessage.GetComponent<Text> ().text = "The light level is quite sufficient. Shall I turn off the lights?";
				
					myTimer = 8;
					counter++;
				}
			}
		}
		if (scenarioNumber == "22") {
			numberOfTasks = 1;
			if (myTimer == -1)
				myTimer = 5;
			if (airConditionerIsOn) {
				if (myTimer > 0)
					myTimer -= Time.deltaTime;
				else {
					messageContainer.SetActive (true);
					isMessageContainerActive = true;
					taskStates [0] = true;
					ActionMessage.GetComponent<Text> ().text = "The temperature is quite pleasant. Shall I turn the Air Conditioner off?";

					myTimer = 8;
					counter++;
				}
			}
		}
		if (scenarioNumber == "23") {
			numberOfTasks = 3;
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
						taskStates [0] = true;

						myTimer = 8;
						counter++;
					} else {
						if (counter == 1) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							ActionMessage.GetComponent<Text> ().text = "Shall I turn the Air Conditioner on?";
							taskStates [1] = true;
							myTimer = 8;
							counter++;
						} else {
							if (counter == 2) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								ActionMessage.GetComponent<Text> ().text = "Shall I turn the Fan on?";
								taskStates [2] = true;
								myTimer = 8;
								counter++;
							}
						}
					}
				}
			}
		}
		if (scenarioNumber == "24") {
			numberOfTasks = 3;
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
						taskStates [0] = true;

						myTimer = 8;
						counter++;
					} else {
						if (counter == 1) {
							messageContainer.SetActive (true);
							isMessageContainerActive = true;
							ActionMessage.GetComponent<Text> ().text = "Shall I turn the Air Conditioner on?";
							taskStates [1] = true;
							myTimer = 8;
							counter++;
						} else {
							if (counter == 2) {
								messageContainer.SetActive (true);
								isMessageContainerActive = true;
								ActionMessage.GetComponent<Text> ().text = "Shall I turn the lights on?";
								taskStates [2] = true;
								myTimer = 8;
								counter++;
							}
						}
					}
				}
			}
		}
		if (scenarioNumber == "25") {
			numberOfTasks = 1;
			if (myTimer == -1)
				myTimer = 10;
			if (myTimer > 0)
				myTimer -= Time.deltaTime;
			else {
				taskStates [0] = true;
				light1a.SetActive (true);
				light1b.SetActive (true);
				light2a.SetActive (true);
				light2b.SetActive (true);
				timeLightIsOn = 0;
				lightIsOn = true;

			}
		}
		if (scenarioNumber == "26") {
			numberOfTasks = 1;
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
					taskStates [0] = true;
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
			numberOfTasks = 3;
			numberOfTasks = 1;
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
					taskStates [0] = true;
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
						taskStates [1] = true;
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
							taskStates [2] = true;
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
			numberOfTasks = 3;
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
							taskStates [0] = true;
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
							taskStates [1] = true;
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
								taskStates [2] = true;
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
			numberOfTasks = 1;
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
					taskStates [0] = true;
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
			numberOfTasks = 1;
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
					taskStates [0] = true;
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
			numberOfTasks = 3;
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
						taskStates [0] = true;
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
						taskStates [1] = true;
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
							taskStates [2] = true;
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
			numberOfTasks = 3;
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
						taskStates [0] = true;
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
							taskStates [1] = true;
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
								taskStates [2] = true;
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
