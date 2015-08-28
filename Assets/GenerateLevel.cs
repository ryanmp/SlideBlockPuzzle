using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GenerateLevel : MonoBehaviour
{

	// prefabs
	public GameObject block;
	public GameObject fixed_block;



	public int grid_dimensions = 3; // 2n + 1  x 2n + 1 (7x7 in this case)
	public float GRAVITY_MAGNITUDE = 10f;

	public Color[] block_colors; // currently using the WAR color palette from colourlovers.com

	private List<Vector2> block_init_ps = new List<Vector2> () {
		new Vector2 (1f, 1f),
		new Vector2 (2f, 1f),
		new Vector2 (1f, 2f),
		new Vector2 (-1f, -2f)
	};
	private List<Vector2> fixed_block_init_ps = new List<Vector2> (){
		new Vector2 (0f, 0f)
	};

	// Use this for initialization
	void Start ()
	{
		Random.seed = 123;

		// create init blocks (fixed and moveable)
		foreach (Vector2 b_position in fixed_block_init_ps) {
			GameObject clone = Instantiate (fixed_block, b_position, Quaternion.identity) as GameObject;
		}

		foreach (Vector2 b_position in block_init_ps) {
			GameObject clone = Instantiate (block, b_position, Quaternion.identity) as GameObject;
			clone.GetComponent<SpriteRenderer> ().color = block_colors [Random.Range (0, block_colors.Length)];
		}

		// build level bounding box
		string[] names = new string[]{"bottom","top","left","right"};
		Vector3[] positions = new Vector3[]{
			new Vector3 (0f, -1f * grid_dimensions - 0.5f, 0f),
			new Vector3 (0f, grid_dimensions + 0.5f, 0f),
			new Vector3 (-1f * grid_dimensions - 0.5f, 0f, 0f),
			new Vector3 (grid_dimensions + 0.5f, 0f, 0f)
		};
		Vector3[] rotations = new Vector3[]{
			new Vector3 (0f, 0f, 0f),
			new Vector3 (0f, 0f, 0f),
			new Vector3 (0f, 0f, -90f),
			new Vector3 (0f, 0f, -90f)
		};
		for (int i = 0; i < names.Length; i++) {
			GameObject o = new GameObject (names [i]);
			o.transform.localScale = new Vector3 (grid_dimensions * 2f + 1f, grid_dimensions * 2f + 1f, grid_dimensions * 2f + 1f);
			o.transform.parent = gameObject.transform;
			o.AddComponent<EdgeCollider2D> ();
			o.transform.position = positions [i];
			o.transform.eulerAngles = rotations [i];
		}

		Physics2D.gravity = new Vector2 (0f, -GRAVITY_MAGNITUDE);
		InvokeRepeating ("ChangeGravity", 3f, 3f);

	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	void ChangeGravity ()
	{
		Physics2D.gravity = new Vector2 (
			RandBinary () * GRAVITY_MAGNITUDE,
			RandBinary () * GRAVITY_MAGNITUDE
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
