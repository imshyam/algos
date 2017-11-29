#include<bits/stdc++.h>
using namespace std;

void counting_sort(int* a, int* b, int n, int k) {
	int c[k + 1] = {0};
	for (int i = 0; i < n; ++i)
	{
		c[a[i]] += 1;
	}
	for(int i = 1; i <= k; i++){
		c[i] += c[i-1];
	}
	for(int i = 0; i < n; i ++){
		b[c[a[i]] - 1] = a[i];
		c[a[i]] -= 1;
	}
}

int max(int* a, int n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		a[i] > max ? max = a[i] : max ;
	}
	return max;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int b[n];

	int k = max(a, n);

	counting_sort(a, b, n, k);

	for (int i = 0; i < n; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}