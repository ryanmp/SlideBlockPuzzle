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

	private List<Vector2> block_init_ps = new List<Vector2> () {
		new Vector2 (1f, 1f),
		new Vector2 (2f, 1f),
		new Vector2 (1f, 0f),
		new Vector2 (-1f, 0f)
	};
	private List<Vector2> fixed_block_init_ps = new List<Vector2> (){
		new Vector2 (0f, 0f)
	};

	private List<Vector3> blocks = new List<Vector3> (); // z component = block type


	// Use this for initialization
	void Start ()
	{
		//Random.seed = 123;

		// read in level from file
		TextAsset l = Resources.Load ("1") as TextAsset;
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
			}
		}

		// build level bounding box
		string[] names = new string[]{"bottom","top","left","right"};
		Vector3[] positions = new Vector3[]{
			new Vector3 (0f, -1f * grid_dimensions / 2f, 0f),
			new Vector3 (0f, grid_dimensions / 2f, 0f),
			new Vector3 (-1f * grid_dimensions / 2f, 0f, 0f),
			new Vector3 (grid_dimensions / 2f, 0f, 0f)
		};
		Vector3[] rotations = new Vector3[]{
			new Vector3 (0f, 0f, 0f),
			new Vector3 (0f, 0f, 0f),
			new Vector3 (0f, 0f, -90f),
			new Vector3 (0f, 0f, -90f)
		};
		for (int i = 0; i < names.Length; i++) {
			GameObject o = new GameObject (names [i]);
			o.transform.localScale = new Vector3 (grid_dimensions, grid_dimensions, grid_dimensions);
			o.transform.parent = gameObject.transform;
			o.AddComponent<EdgeCollider2D> ();
			o.transform.position = positions [i];
			o.transform.eulerAngles = rotations [i];
		}

		Physics2D.gravity = new Vector2 (0f, -GRAVITY_MAGNITUDE);
		//InvokeRepeating ("ChangeGravity", 3f, 3f);

	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	public void ChangeGravity (Vector2 v)
	{
		/*
		Physics2D.gravity = new Vector2 (
			RandBinary () * GRAVITY_MAGNITUDE,
			RandBinary () * GRAVITY_MAGNITUDE
		);*/


		Physics2D.gravity = new Vector2 (
			v.x * GRAVITY_MAGNITUDE,
			v.y * GRAVITY_MAGNITUDE
		);
	}
	
	float RandBinary ()
	{
		float ret = -1f;
		if (Random.Range (0, 2) == 1)
			ret = 1f;
		return ret;
	}



}
