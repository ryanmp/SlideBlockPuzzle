using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using SimpleJSON;

/*
 * todo:
 * 
 *
 *
 * circlepop enemies have random.range(min,max) amount of seeking towards 
 * center of mass of player circles
 *
 * reset level when balls are all gone (score is at zero)
 * use a cool animation like extending the zoom effect all the way out then pulling it back in
 * 
 * add in UI stuff like counting down timer, total current score
 * and button for menu/pause, and see if i can figure out how to rotate these
 * items when phone rotates
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

	// note, since these are static... they won't be reset upon application.loadlevel (for reloading level)
	private static float min_enemy_size = 1.0f;
	private static float max_enemy_size = 2.0f;
	private static float min_enemy_spawn_time = 3.0f;
	private static float max_enemy_spawn_time = 3.0f;

	public GameObject c_holder;
	public Vector2 center_of_player_mass = Vector2.zero; //
		
	private float started_reset_at;
	private bool started_reset = false;
	
	public Timer timer;

	/// new section for using midi+js note data for level
	public static string file_path = "Music/JS_edits/";
	public string song_name = "loopy_piano2_edit";
	public static TextAsset file_json;
	public static JSONNode testData;
	private AudioSource audio_source;
	public AudioClip song_audio;
	public float init_song_delay = 1f;
	private static List<int> track_player_idxs = new List<int> ();
	public Color[] track_colors;




	
	// Use this for initialization
	void Start ()
	{
		Random.seed = 123;

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
			new Vector3 ((grid_dimensions + wall_w - line_w) / 2f, 0f, 0f)
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
		//Invoke ("CreateEnemy", 2f);




		file_json = (TextAsset)Resources.Load (file_path + song_name);
		testData = JSON.Parse (file_json.text); 
		Debug.Log ("there are " + testData.Count + " tracks for this song - you need params for each!");

		/// starts song!
		audio_source = gameObject.AddComponent<AudioSource> ();
		audio_source.clip = song_audio;
		audio_source.volume = 1f;
		audio_source.PlayScheduled (AudioSettings.dspTime + init_song_delay); // 2 second delay

		// make an index for each track (for incrementing through the notes while playing the song)
		for (int i = 0; i < testData.Count; i++) {
			track_player_idxs.Add (0);
		}
		
		

	}
	
	
	void CreateEnemy (string color_string, float velocity)
	{
		float s = grid_dimensions / 2f;

		GameObject e = Instantiate (enemy, new Vector2 (Random.Range (-s, s), Random.Range (-s, s)), Quaternion.identity) as GameObject;
		//float this_size = Random.Range (min_enemy_size, max_enemy_size);
		float this_size = 0.5f + (velocity * 0.5f);
		e.transform.localScale = Vector3.one * this_size;
		e.transform.position = new Vector2 (Random.Range (-s, s), Random.Range (-s, s));

		// set color
		Color color = Color.white;
		if (color_string == "default") {
			color = level_color;
		} else if (color_string.Length < 3) {
			color = track_colors [int.Parse (color_string)];
		} else {

			UnityEngine.ColorUtility.TryParseHtmlString (color_string, out color);
		}
		e.GetComponent<SpriteRenderer> ().color = color;


		Vector2 init_vel = new Vector2 (Random.Range (0f, 1f), Random.Range (0f, 1f)).normalized * Random.Range (-2f, 2f);
		e.GetComponent<Enemy> ().SetInitVel (init_vel);

		// increase difficulty with each new enemy
		/*
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
		}*/

		//// the endless loop!
		//Invoke ("CreateEnemy", Random.Range (min_enemy_spawn_time, max_enemy_spawn_time));


	}

	public void ChangeGravity (Vector2 v, float gestureVel)
	{
		foreach (Rigidbody2D rb in c_holder.transform.GetComponentsInChildren<Rigidbody2D> ()) {
			rb.velocity = v.normalized * gestureVel * BLOCK_VELOCITY;
		}
		Physics2D.gravity = new Vector2 (v.x * GRAVITY_MAGNITUDE, v.y * GRAVITY_MAGNITUDE);
		Physics.gravity = new Vector3 (v.x * GRAVITY_MAGNITUDE, v.y * GRAVITY_MAGNITUDE, 0f);
	}
	
	void Update ()
	{


		// phase 1 --- spawn enemies
		for (int i = 0; i < testData.Count; i++) { //loop through all tracks

			float fadeinani_length = 1.5f;
			float current_trigger = testData [i] [track_player_idxs [i]] ["actual_time"].AsFloat - fadeinani_length;
			Debug.Log (current_trigger);
			
			// note: at the end of each track of notes... I'm getting zeroes for the trigger??
			// the fix below works, but will miss the first beat of the song
			if (Time.timeSinceLevelLoad - init_song_delay >= current_trigger) {
				Debug.Log (current_trigger);
				
				float velocity = testData [i] [track_player_idxs [i]] ["normalized_velocity"].AsFloat;
				float note = testData [i] [track_player_idxs [i]] ["normalized_note"].AsFloat;
				string color_string = testData [i] [track_player_idxs [i]] ["color"];

				//clones.Add (GenEnemy (i, velocity, note));

				track_player_idxs [i]++;
				CreateEnemy (color_string, velocity);
			}
		}








		center_of_player_mass = Vector2.zero;
		foreach (Rigidbody2D rb in c_holder.transform.GetComponentsInChildren<Rigidbody2D> ()) {
			center_of_player_mass += rb.position;
		}

		// start reset
		if (c_holder.transform.childCount == 0 && !started_reset) {
			started_reset = true;
			started_reset_at = Time.time;
		}

		// other reset animation stuff?
		if (started_reset) {
			float z_loc = (Time.timeSinceLevelLoad - started_reset_at) * 100;
			GameObject level_clone = Instantiate (level_outline, new Vector3 (0f, 0f, z_loc), Quaternion.identity) as GameObject;
			level_clone.GetComponent<SpriteRenderer> ().color = level_color;
		}

		// reload!
		if (Time.time - started_reset_at > 2.0f && started_reset) {
			Application.LoadLevel (0);
			timer.Reset ();
		}

	}
	
}
