using UnityEngine;
using System.Collections;

public class Helpers : MonoBehaviour
{

	// Use this for initialization
	void Start ()
	{
		Random.seed = 123;
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public float RandBinary ()
	{
		float ret = -1f;
		if (Random.Range (0, 2) == 1)
			ret = 1f;
		return ret;
	}
}
