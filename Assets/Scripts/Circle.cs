using UnityEngine;
using System.Collections;

public class Circle : MonoBehaviour
{

	public GameObject on_destroy;
	private float start_fade_out_time;
	private bool fading_out = false;

	public float fade_out_duration = 1.0f;

	public AudioClip[] glock_notes;
	private int which_note;
	
	// Use this for initialization
	void Start ()
	{
		which_note = Random.Range (0, glock_notes.Length);
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (fading_out) {
			//Color c = gameObject.GetComponent<SpriteRenderer> ().color;
			Color c = Color.white;
			float current_alpha = (1 - (Time.time - start_fade_out_time) * (1 / fade_out_duration)) * 0.5f; // fade from 0.5 to 0.0
			gameObject.GetComponent<SpriteRenderer> ().color = new Color (c.r, c.g, c.b, current_alpha);
		}
	}

	public void CustomDestroy ()
	{

		Debug.Log ("CustomDestroy");
		GameObject go = Instantiate (on_destroy, gameObject.transform.position, gameObject.transform.rotation) as GameObject;
		Color c = gameObject.GetComponent<SpriteRenderer> ().color;
		go.GetComponent<ParticleSystem> ().startColor = new Color (c.r, c.g, c.b, 0.15f);

		Destroy (gameObject.GetComponent<Rigidbody2D> ());
		gameObject.GetComponent<CircleCollider2D> ().enabled = false;
		Destroy (gameObject, fade_out_duration);
		fading_out = true;
		start_fade_out_time = Time.time;

		Destroy (go, fade_out_duration);
	}

	void OnTriggerEnter2D (Collider2D c)
	{
		CustomDestroy ();
		//c.gameObject.GetComponent<Enemy> ().GotKill ();
	}

	void OnCollisionEnter2D (Collision2D c)
	{

		float c_mag = c.relativeVelocity.magnitude;
		//Debug.Log (c_mag);

		if (Time.time > 1.0f && c_mag > 5.0f) { //avoid init collisions from instantiation
			AudioSource audio_source = GetComponent<AudioSource> ();
			AudioClip clip = glock_notes [which_note];
			audio_source.clip = clip;
			float vol = c_mag / 30f;
			audio_source.volume = Mathf.Clamp (vol, 0, 1) * 0.003f;
			audio_source.Play ();

		}



	}

}

