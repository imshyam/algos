package algos.dp;

import java.util.Map;
import java.util.HashMap;
import java.util.ArrayList;

/**
  *
  * @author imshyam
  */

public class MatrixChainMultiplication {
	// cost of multiplication
	public long cost;
	// solution array
	public int[][] s;

	public void solve(int[] p){
		int n = p.length - 1; //p0, p1, p2, p3 ...... pn
		int[][] m = new int[n][n];
		s = new int[n][n];
		int q;
		for(int l = 2;l <= n; l++){
			for(int i = 0; i < n - l + 1; i++){
				int j = i + l - 1;
				m[i][j] = Integer.MAX_VALUE;
				for(int k = i; k < j; k++) {
					q = m[i][k] + m[k + 1][j] + (p[i] * p[k + 1] * p[j+1]);
					if(q < m[i][j]){
						m[i][j] = q;
						s[i][j] = k;
					}
				}
			}
		}
		cost = m[0][n - 1];
	}

	int max(int a, int b) {
		return a > b ? a : b;
	}
}