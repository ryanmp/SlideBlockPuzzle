using UnityEngine;
using System.Collections;

public class Circle : MonoBehaviour
{

	public GameObject on_destroy;
	private float start_fade_out_time;
	private bool fading_out = false;

	public float fade_out_duration = 1.0f;

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (fading_out) {
			Color c = gameObject.GetComponent<SpriteRenderer> ().color;
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

		gameObject.GetComponent<Rigidbody2D> ().isKinematic = true;
		gameObject.GetComponent<CircleCollider2D> ().enabled = false;
		Destroy (gameObject, fade_out_duration);
		fading_out = true;
		start_fade_out_time = Time.time;

		Destroy (go, 1.0f);
	}

	void OnTriggerEnter2D (Collider2D c)
	{
		CustomDestroy ();
	}
}
