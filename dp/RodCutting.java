package algos.dp;

import java.util.Map;
import java.util.HashMap;
import java.util.ArrayList;


public class RodCutting {
	public int price;
	public ArrayList<Integer> result = new ArrayList<Integer>();

	public void solve(int n, int[] p){
		int tempSol[] = new int[n + 1];
		int cutHere[] = new int[n + 1];
		tempSol[0] = 0;
		for(int i = 1; i < n + 1; i ++) {
			int t = -1;
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
			int res = r.cutHere[n] == 0 ? n - r.cutHere[n] : r.cutHere[n];
			result.add(res);
			n -= res;
		} while(n > 0);
	}

	int max(int a, int b) {
		return a > b ? a : b;
	}
}