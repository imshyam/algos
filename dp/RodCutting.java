package algos.dp;

import java.util.Map;
import java.util.HashMap;


public class RodCutting {
	public int price;
	public int result[];

	public void solve(int n, int[] p){
		int tempSol[] = new int[n + 1];
		tempSol[0] = 0;
		for(int i = 1; i < n + 1; i ++) {
			int t = -1;
			for(int j = 1; j < i + 1; j++){
				t = max(t, p[j - 1] + tempSol[i - j]);
				if(t < (p[j - 1] + tempSol[i - j])){
					System.out.println("break at : " + j);
				}
			}
			tempSol[i] = t;
		}
		this.price = tempSol[n];
	}

	int max(int a, int b) {
		return a > b ? a : b;
	}
}