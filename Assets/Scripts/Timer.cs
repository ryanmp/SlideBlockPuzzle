using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{

	private float goal_time;
	public float current_time;
		
	public GenerateLevel gl;
		
	public void Reset ()
	{
		goal_time = gl.song_audio.length + gl.init_song_delay;
		current_time = goal_time;
	}


	void Start ()
	{
		Reset ();
	}
		

	void Update ()
	{
		current_time = goal_time - Time.timeSinceLevelLoad;
		current_time = Mathf.Clamp (current_time, 0, goal_time);
		GetComponent<Text> ().text = current_time.ToString ("0.0");
	}

}
