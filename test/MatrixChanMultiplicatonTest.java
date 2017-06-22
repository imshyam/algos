package algos.test;

import algos.dp.MatrixChainMultiplication;

class MatrixChainMultiplicationTest{
	public static void main(String args[]){
		MatrixChainMultiplication mm = new MatrixChainMultiplication();
		int[] p = new int[]{30, 35, 15, 5, 10, 20, 25};
		mm.solve(p);
		System.out.println(mm.cost);
	}
}