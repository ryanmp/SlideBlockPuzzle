using UnityEngine;
using System.Collections;

public class MainCamera : MonoBehaviour
{

	public Transform target; // just the center of the level 

	private Vector3 new_position;
	private float move_start_time;

	public float CAM_SHIFT_DISTANCE = 10f;
	public float CAM_SHIFT_TIME = 0.25f;

	void Start ()
	{
		new_position = gameObject.transform.position;
	}

	void Update ()
	{
		float t = (Time.timeSinceLevelLoad - move_start_time) * (1 / CAM_SHIFT_TIME);
		t *= t;
		transform.position = Vector3.Lerp (transform.position, new_position, t);
		transform.LookAt (target);

		//Debug.Log (transform.position);
	}

	public void MoveCamera (Vector3 v, float gestureVel)
	{
		//Debug.Log ("START MOVE!");
		CAM_SHIFT_TIME = (1 / gestureVel) * 500;
		move_start_time = Time.timeSinceLevelLoad;
		new_position = new Vector3 (v.x * CAM_SHIFT_DISTANCE, v.y * CAM_SHIFT_DISTANCE, gameObject.transform.position.z);
	}


}
