using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

/*
 * todo:
 * 
 * since it's no longer a block slide puzzle... why restrict swipe to 8 directions? swipe any direction!
 * add in enemies... red circles which start with outlines... then semi transparent fill from center. when full, pop!
 * destroying any player bubbles touching them (add in destroy w/ particles animation)
 * 
 * different level shapes, or obstacles within level? styling, the same as level outline
 * 
 * 
 * */


public class GenerateLevel : MonoBehaviour
{

	// prefabs
	public GameObject block;
	public GameObject fixed_block;
	
	private int grid_dimensions = 0; 
	public float GRAVITY_MAGNITUDE = 10f;

	public Color[] block_colors; // currently using the WAR color palette from colourlovers.com
	public Color level_color;
	
	private List<Vector3> blocks = new List<Vector3> (); // z component = block type
	private List<GameObject> blocks_obs = new List<GameObject> ();

	public float BLOCK_VELOCITY = 0.1f;

	public PhysicsMaterial2D default_physics_mat;
	
	public GameObject level_outline;
	public GameObject level_obstacle;

	public GameObject enemy;

	private static float min_enemy_size = 1.0f;
	private static float max_enemy_size = 2.0f;
	private static float min_enemy_spawn_time = 3.0f;
	private static float max_enemy_spawn_time = 3.0f;

	public GameObject c_holder;




	
	// Use this for initialization
	void Start ()
	{
		//Random.seed = 123;

		QualitySettings.antiAliasing = 2;

		Application.targetFrameRate = 120;

		int num_outlines = 7;
		float max_alpha = 0.2f;
		float zoom_factor = 1.1f;
		for (int i = 0; i < num_outlines; i++) {
			GameObject level_clone = Instantiate (level_outline, new Vector3 (0f, 0f, i * zoom_factor), Quaternion.identity) as GameObject;
			//GameObject obstacle_clone = Instantiate (level_obstacle, new Vector3 (-1.5f, -1.5f, i * zoom_factor), Quaternion.identity) as GameObject;

			Color c = level_color;
			if (i == 0) {
				level_clone.GetComponent<SpriteRenderer> ().color = new Color (c.r, c.g, c.b, 1f);
				//obstacle_clone.GetComponent<SpriteRenderer> ().color = new Color (c.r, c.g, c.b, 1f);
			} else {
				level_clone.GetComponent<SpriteRenderer> ().color = new Color (c.r, c.g, c.b, max_alpha * (1f - (i * 1.0f / num_outlines * 1.0f)));
				//obstacle_clone.GetComponent<SpriteRenderer> ().color = new Color (c.r, c.g, c.b, max_alpha * (1f - (i * 1.0f / num_outlines * 1.0f)));
			}
		}


		// read in level from file
		TextAsset l = Resources.Load ("2") as TextAsset;
		string[] lines = l.text.Split ("\n" [0]);
		grid_dimensions = lines.Length;
		int[] block_types = { 0,1,2 };
		for (int i = 0; i < lines.Length; i++) {
			for (int j = 0; j < lines[0].Length; j++) {
				double this_block = char.GetNumericValue (lines [i] [j]);
				int x = j - grid_dimensions / 2;
				int y = (i - grid_dimensions / 2) * -1;
				if (this_block >= 0f) {
					blocks.Add (new Vector3 (x, y, (float)this_block));
				}
			}
		}

		// create init blocks
		foreach (Vector3 b_position in blocks) {
			int z = (int)b_position.z;
			if (z == 0) { // fixed block type
				GameObject clone = Instantiate (fixed_block, new Vector2 (b_position.x, b_position.y), Quaternion.identity) as GameObject;
			} else { //moveable block type
				GameObject clone = Instantiate (block, new Vector2 (b_position.x, b_position.y), Quaternion.identity) as GameObject;
				clone.GetComponent<SpriteRenderer> ().color = block_colors [z - 1];
				clone.transform.parent = c_holder.transform;
				//blocks_obs.Add (clone);
			}
		}

		// build level bounding box
		string[] names = new string[]{"bottom","top","left","right"};

		float wall_w = 1f;
		float line_w = 0.3f;

		Vector3[] positions = new Vector3[]{
			new Vector3 (0f, (-1f * grid_dimensions - wall_w + line_w) / 2f, 0f),
			new Vector3 (0f, (grid_dimensions + wall_w - line_w) / 2f, 0f),
			new Vector3 ((-1f * grid_dimensions - wall_w + line_w) / 2f, 0f, 0f),
			new Vector3 ((grid_dimensions + wall_w + - line_w) / 2f, 0f, 0f)
		};
		Vector3[] scales = new Vector3[]{
			new Vector3 (grid_dimensions + wall_w * 2, wall_w, 0f),
			new Vector3 (grid_dimensions + wall_w * 2, wall_w, 0f),
			new Vector3 (wall_w, grid_dimensions, 0f),
			new Vector3 (wall_w, grid_dimensions, 0f)
		};

		for (int i = 0; i < names.Length; i++) {
			GameObject o = new GameObject (names [i]);
			o.transform.localScale = scales [i];
			o.transform.parent = gameObject.transform;
			o.AddComponent<BoxCollider2D> ();
			o.GetComponent<BoxCollider2D> ().sharedMaterial = default_physics_mat;
			o.transform.position = positions [i];
		}

		Physics2D.gravity = new Vector2 (0f, 0f);
		Physics.gravity = new Vector3 (0f, 0f, 0f);


		//InvokeRepeating ("ChangeGravity", 3f, 3f);

		Invoke ("CreateEnemy", 2f);

	}
	
	
	void CreateEnemy ()
	{
		float s = grid_dimensions / 2f;

		GameObject e = Instantiate (enemy, new Vector2 (Random.Range (-s, s), Random.Range (-s, s)), Quaternion.identity) as GameObject;
		float this_size = Random.Range (min_enemy_size, max_enemy_size);
		e.transform.localScale = Vector3.one * this_size;
		e.transform.position = new Vector2 (Random.Range (-s, s), Random.Range (-s, s));
		e.GetComponent<SpriteRenderer> ().color = level_color;
		e.GetComponent<Rigidbody2D> ().velocity = new Vector2 (Random.Range (0f, 1f), Random.Range (0f, 1f)).normalized * Random.Range (-2f, 2f);
		Destroy (e, 3f);
		Invoke ("CreateEnemy", Random.Range (min_enemy_spawn_time, max_enemy_spawn_time));

		// increase difficulty with each new enemy
		if (min_enemy_spawn_time > 0.5f) {
			min_enemy_spawn_time -= 0.15f;
		}
		if (max_enemy_size < 4f) {
			max_enemy_size += 0.25f;
		}
		if (min_enemy_size < 3f) {
			min_enemy_size += 0.20f;
		}
		if (max_enemy_spawn_time > 1.5f) {
			max_enemy_spawn_time -= 0.1f;
		}

	}





	public void ChangeGravity (Vector2 v, float gestureVel)
	{

		/*
		foreach (GameObject b in blocks_obs) {

			//Debug.Log (b.GetComponent<Rigidbody2D> ().constraints);

			// add additional constraints?
			if (v.x == 0f) {
				//b.GetComponent<Rigidbody2D> ().constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezeRotation;
			} else if (v.y == 0f) {
				//b.GetComponent<Rigidbody2D> ().constraints = RigidbodyConstraints2D.FreezePositionY | RigidbodyConstraints2D.FreezeRotation;
			} else {
				//b.GetComponent<Rigidbody2D> ().constraints = RigidbodyConstraints2D.FreezeRotation;
			}

			// give objects an initial kick!
			b.GetComponent<Rigidbody2D> ().velocity = v.normalized * gestureVel * BLOCK_VELOCITY;

		}*/


		foreach (Rigidbody2D rb in c_holder.transform.GetComponentsInChildren<Rigidbody2D> ()) {
			rb.velocity = v.normalized * gestureVel * BLOCK_VELOCITY;
		}

		Physics2D.gravity = new Vector2 (
			v.x * GRAVITY_MAGNITUDE,
			v.y * GRAVITY_MAGNITUDE
		);

		Physics.gravity = new Vector3 (v.x * GRAVITY_MAGNITUDE, v.y * GRAVITY_MAGNITUDE, 0f);




		///// this is how to destroy a circle!
		//blocks_obs [0].GetComponent<Circle> ().CustomDestroy ();
		//blocks_obs.RemoveAt (0);

	}



	float RandBinary ()
	{
		float ret = -1f;
		if (Random.Range (0, 2) == 1)
			ret = 1f;
		return ret;
	}



}
