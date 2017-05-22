package algos.dp;

import java.util.Map;
import java.util.HashMap;
import java.util.ArrayList;

/**
  *
  * @author imshyam
  *
  */

/** Class contains :
  * 1. price
  *       long as maximum revenue obtainable by cutting up the rod and selling the pieces
  * 2. result
  *       ArrayList of length of the pieces
  */

public class RodCutting {
	// Maximum revenue obtainable by cutting up the rod and selling the pieces
	public long price;
	// Length of the pieces
	public ArrayList<Integer> result = new ArrayList<Integer>();

	public void solve(int n, int[] p){
		// Array for memoizing prices of smaller cuts
		int tempSol[] = new int[n + 1];
		// Array for memoizing cut location
		int cutHere[] = new int[n + 1];
		tempSol[0] = 0;
		for(int i = 1; i < n + 1; i ++) {
			// Temp price of the piece of rod
			int t = -1;
			// Temp location of the cut
			int t1 = i;
			for(int j = 1; j < i + 1; j++){
				if(t < (p[j - 1] + tempSol[i - j])){
					t1 = i - j;
				}
				t = max(t, p[j - 1] + tempSol[i - j]);
			}
			tempSol[i] = t;
			cutHere[i] = t1;
		}
		this.price = tempSol[n];
		do {
			int res = cutHere[n] == 0 ? n - cutHere[n] : cutHere[n];
			this.result.add(res);
			n -= res;
		} while(n > 0);
	}

	int max(int a, int b) {
		return a > b ? a : b;
	}
}