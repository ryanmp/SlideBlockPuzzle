using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour
{

	private float start_time;
	private float total_lifetime = 3.0f;

	private bool collider_enabled = false;

	// Use this for initialization
	void Start ()
	{
		start_time = Time.time;

		GameObject timer = gameObject.transform.GetChild (0).gameObject;
		Color c = gameObject.GetComponent<SpriteRenderer> ().color;
		timer.GetComponent<SpriteRenderer> ().color = new Color (c.r, c.g, c.b, 0.3f);

	}
	
	// Update is called once per frame
	void Update ()
	{

		GameObject timer = gameObject.transform.GetChild (0).gameObject;
		float t = (Time.time - start_time) * (1 / total_lifetime);
		//Debug.Log (t);
		timer.transform.localScale = Vector3.one * (t);

		if (t > 0.95f) {
			collider_enabled = true;
		}

		if (collider_enabled) {
			gameObject.GetComponent<CircleCollider2D> ().enabled = true;
			gameObject.transform.GetChild (0).gameObject.GetComponent<SpriteRenderer> ().color = new Color (1f, 0.7f, 0.7f, 0.4f);
			gameObject.GetComponent<SpriteRenderer> ().color = new Color (1f, 0.7f, 0.7f, 0.8f);
		}



	}
}
