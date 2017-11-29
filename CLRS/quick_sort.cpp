#include<bits/stdc++.h>
using namespace std;

int partition(int* a, int s, int e){
	int pivot = e-1;
	int i = s;
	for(int j = s; j < e - 1; j++) {
		if(a[j] < a[pivot]){
			int t = a[j];
			a[j] = a[i];
			a[i] = t;
			i++;
		}
	}
	int t = a[pivot];
	a[pivot] = a[i];
	a[i] = t;
	return i;
}

void quick_sort(int* a, int s,int e) {
	if(s < e-1)	{
		int k = partition(a, s, e);
		quick_sort(a, s, k);
		quick_sort(a, k+1, e);
	}
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

	quick_sort(a, 0, n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}