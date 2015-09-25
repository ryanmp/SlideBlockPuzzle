using UnityEngine;
using System.Collections;

public class PlayerInput : MonoBehaviour
{

	private float fingerStartTime = 0.0f;
	private Vector2 fingerStartPos = Vector2.zero;
	
	private bool isSwipe = false;
	private float minSwipeDist = 25.0f;
	private float maxSwipeTime = 0.5f;

	public GameObject GenerateLevel;
	public GameObject MainCamera;

	private Vector2 swipeType = Vector2.zero;

	private float gestureVel = 0f;
	public float minGestureVel = 150f;
	public float maxGestureVel = 3000f;
	private bool keyPressed = false;

	// Update is called once per frame
	void Update ()
	{
		MobileInput ();
		KeyboardInput ();
	}


	void MobileInput ()
	{
		
		//mobile input
		if (Input.touchCount > 0) {
			
			foreach (Touch touch in Input.touches) {
				switch (touch.phase) {
				case TouchPhase.Began:
					/* this is a new touch */
					isSwipe = true;
					fingerStartTime = Time.time;
					fingerStartPos = touch.position;
					break;
					
				case TouchPhase.Canceled:
					/* The touch is being canceled */
					isSwipe = false;
					break;
					
				case TouchPhase.Ended:
					
					float gestureTime = Time.time - fingerStartTime;
					float gestureDist = (touch.position - fingerStartPos).magnitude;
					gestureVel = gestureDist / gestureTime;
					
					if (isSwipe && gestureTime < maxSwipeTime && gestureDist > minSwipeDist) {
						Vector2 direction = touch.position - fingerStartPos;

						float ratio = Mathf.Abs (direction.x) / Mathf.Abs (direction.y);
						
						swipeType = direction.normalized;
						//Debug.Log (swipeType);
						//Debug.Log (gestureVel);
						gestureVel = Mathf.Clamp (gestureVel, 150, 3000);
						GenerateLevel.GetComponent<GenerateLevel> ().ChangeGravity (swipeType, gestureVel);
						MainCamera.GetComponent<MainCamera> ().MoveCamera (swipeType, gestureVel);
						
					}
					
					break;
				}
			}
		}
	}

	void KeyboardInput ()
	{
		gestureVel = maxGestureVel;

		if (Input.GetKey (KeyCode.UpArrow)) {
			keyPressed = true;
			swipeType = new Vector2 (0f, 1f);
		}
		if (Input.GetKey (KeyCode.DownArrow)) {
			keyPressed = true;
			swipeType = new Vector2 (0f, -1f);
		}
		if (Input.GetKey (KeyCode.LeftArrow)) {
			keyPressed = true;
			swipeType = new Vector2 (-1f, 0f);
		}
		if (Input.GetKey (KeyCode.RightArrow)) {
			keyPressed = true;
			swipeType = new Vector2 (1f, 0f);
		}

		if (keyPressed) {
			keyPressed = false;
			GenerateLevel.GetComponent<GenerateLevel> ().ChangeGravity (swipeType, gestureVel);
			MainCamera.GetComponent<MainCamera> ().MoveCamera (swipeType, gestureVel);
		}
	}
}