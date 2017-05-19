package algos.test;

import algos.dp.RodCutting;

class Test{
	public static void main(String args[]){
		RodCutting r = new RodCutting();
		int n; int[] p;
		n = 10;
		p = new int[]{1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
		r.solve(n, p);
		System.out.println(r.price);
	}
}