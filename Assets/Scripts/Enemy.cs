using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour
{

	private float start_time;
	private float total_lifetime = 3.0f;

	private bool collider_enabled = false;
	private bool played_note = false;
	private bool is_disabled = false;
	private bool got_kill = false;
	private bool played_kill_note = false;

	public AudioClip[] synth_notes;
	public AudioClip[] piano_notes;

	private int which_note;

	// Use this for initialization
	void Start ()
	{
		start_time = Time.time;

		GameObject timer = gameObject.transform.GetChild (0).gameObject;
		Color c = gameObject.GetComponent<SpriteRenderer> ().color;
		timer.GetComponent<SpriteRenderer> ().color = new Color (c.r, c.g, c.b, 0.3f);

		// play fade in sound
		which_note = Random.Range (0, synth_notes.Length);
		AudioSource audio_source = timer.GetComponent<AudioSource> ();
		AudioClip clip = synth_notes [which_note];
		audio_source.clip = clip;
		audio_source.Play ();

	}

	public void GotKill ()
	{
		got_kill = true;
	}

	// Update is called once per frame
	void Update ()
	{

		GameObject timer = gameObject.transform.GetChild (0).gameObject;
		float t = (Time.time - start_time) * (1 / total_lifetime);
		//Debug.Log (t);
		timer.transform.localScale = Vector3.one * (t);

		// run once (might need to compensate for any delay to the hit in the audio file?)
		if (t > 0.95f && played_note == false) {
			played_note = true;
			AudioSource audio_source = GetComponent<AudioSource> ();
			AudioClip clip = piano_notes [which_note];
			audio_source.clip = clip;
			audio_source.Play ();
			Destroy (gameObject, clip.length);

		}

		// run once upon crossing threshold
		if (t > 0.95f && collider_enabled == false) {
			collider_enabled = true;
			gameObject.GetComponent<CircleCollider2D> ().enabled = true;
			gameObject.transform.GetChild (0).gameObject.GetComponent<SpriteRenderer> ().color = new Color (1f, 0.7f, 0.7f, 0.4f);
			gameObject.GetComponent<SpriteRenderer> ().color = new Color (1f, 0.7f, 0.7f, 0.8f);

		}

		if (t > 1.0f && is_disabled == false) {
			is_disabled = true;
			gameObject.GetComponent<CircleCollider2D> ().enabled = false;
			gameObject.transform.GetChild (0).gameObject.GetComponent<SpriteRenderer> ().enabled = false;
			gameObject.GetComponent<SpriteRenderer> ().enabled = false;

		}


		if (got_kill && !played_kill_note) {

			/*
			played_kill_note = true;


			Debug.Log ("PLAYING!!");

			AudioSource as3 = gameObject.transform.GetChild (0).gameObject.GetComponent<AudioSource> ();
			int harmony_note = (which_note + 6) % piano_notes.Length;
			AudioClip clip = piano_notes [harmony_note];
			as3.clip = clip;
			as3.PlayDelayed (0.5f);
			*/



		}
	}
}
