using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;



public class GenerateLevel : MonoBehaviour
{

	// prefabs
	public GameObject block;
	public GameObject fixed_block;
	
	private int grid_dimensions = 0; 
	public float GRAVITY_MAGNITUDE = 10f;

	public Color[] block_colors; // currently using the WAR color palette from colourlovers.com
	
	private List<Vector3> blocks = new List<Vector3> (); // z component = block type
	private List<GameObject> blocks_obs = new List<GameObject> ();

	public float BLOCK_VELOCITY = 0.1f;

	public PhysicsMaterial2D default_physics_mat;


	// Use this for initialization
	void Start ()
	{
		//Random.seed = 123;

		Application.targetFrameRate = 120;


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
				blocks_obs.Add (clone);
			}
		}

		// build level bounding box
		string[] names = new string[]{"bottom","top","left","right"};

		float wall_w = 1f;

		Vector3[] positions = new Vector3[]{
			new Vector3 (0f, (-1f * grid_dimensions - wall_w) / 2f, 0f),
			new Vector3 (0f, (grid_dimensions + wall_w) / 2f, 0f),
			new Vector3 ((-1f * grid_dimensions - wall_w) / 2f, 0f, 0f),
			new Vector3 ((grid_dimensions + wall_w) / 2f, 0f, 0f)
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

	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	public void ChangeGravity (Vector2 v, float gestureVel)
	{

		foreach (GameObject b in blocks_obs) {

			Debug.Log (b.GetComponent<Rigidbody2D> ().constraints);

			// add additional constraints?
			if (v.x == 0f) {
				//b.GetComponent<Rigidbody2D> ().constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezeRotation;
			} else if (v.y == 0f) {
				//b.GetComponent<Rigidbody2D> ().constraints = RigidbodyConstraints2D.FreezePositionY | RigidbodyConstraints2D.FreezeRotation;
			} else {
				//b.GetComponent<Rigidbody2D> ().constraints = RigidbodyConstraints2D.FreezeRotation;
			}

			// give objects an initial kick!
			Debug.Log (gestureVel);

			b.GetComponent<Rigidbody2D> ().velocity = v.normalized * Mathf.Clamp (gestureVel, 300, 3000) * BLOCK_VELOCITY;
		}

		Physics2D.gravity = new Vector2 (
			v.x * GRAVITY_MAGNITUDE,
			v.y * GRAVITY_MAGNITUDE
		);

		Physics.gravity = new Vector3 (v.x * GRAVITY_MAGNITUDE, v.y * GRAVITY_MAGNITUDE, 0f);

	}
	
	float RandBinary ()
	{
		float ret = -1f;
		if (Random.Range (0, 2) == 1)
			ret = 1f;
		return ret;
	}



}
