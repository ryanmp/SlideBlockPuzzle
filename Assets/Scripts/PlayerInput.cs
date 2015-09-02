﻿using UnityEngine;
using System.Collections;

public class PlayerInput : MonoBehaviour
{

	private float fingerStartTime = 0.0f;
	private Vector2 fingerStartPos = Vector2.zero;
	
	private bool isSwipe = false;
	private float minSwipeDist = 25.0f;
	private float maxSwipeTime = 0.5f;

	private float ratio_for_nondiagonal = 5.0f;

	public GameObject GenerateLevel;
	public GameObject MainCamera;


	// Update is called once per frame
	void Update ()
	{
		
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
					float gestureVel = gestureDist / gestureTime;
					
					if (isSwipe && gestureTime < maxSwipeTime && gestureDist > minSwipeDist) {
						Vector2 direction = touch.position - fingerStartPos;
						Vector2 swipeType = Vector2.zero;

						float ratio = Mathf.Abs (direction.x) / Mathf.Abs (direction.y);

						/*
						 * Code for 9 direction swipes
						 * 
						 * 
						 * 
						//// straight swipes (UP,RIGHT,DOWN,LEFT)
						if (ratio > ratio_for_nondiagonal || ratio < 1f / ratio_for_nondiagonal) {
							Debug.Log ("straight");
							if (Mathf.Abs (direction.x) > Mathf.Abs (direction.y)) {
								swipeType = Vector2.right * Mathf.Sign (direction.x); // the swipe is horizontal:
							} else {
								swipeType = Vector2.up * Mathf.Sign (direction.y); // the swipe is vertical:
							}
							// swipeType set! 

						} else { //// diagonal swipes
							if (direction.y > 0) { //up
								if (direction.x > 0) { // right
									swipeType = new Vector2 (1f, 1f);
								} else {
									swipeType = new Vector2 (-1f, 1f);
								}
							} else { //down
								if (direction.x > 0) { // right
									swipeType = new Vector2 (1f, -1f);
								} else {
									swipeType = new Vector2 (-1f, -1f);
								}
							}
						}*/

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
}