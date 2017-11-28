#include<bits/stdc++.h>
using namespace std;

void MAX_HEAP(int *a, int i, int n){
	int l = (2 * i) + 1;
	int r = (2 * i) + 2;
	int largest = i;
	if(r < n && a[r] > a[i]){
		largest = r;
	}
	if(l < n && a[l] > a[largest]) {
		largest = l;
	}
	if(largest != i){
		int t = a[i];
		a[i] = a[largest];
		a[largest] = t;
		MAX_HEAP(a, largest, n);
	}
}

void heapify(int* a, int n) {
	for(int i = (n)/2; i >0; i--) {
		MAX_HEAP(a, i-1, n);
	}
}

void heap_sort(int* a, int n) {
	for(int i = n; i >1; i--){
		int t = a[i-1];
		a[i-1] = a[0];
		a[0] = t;
		MAX_HEAP(a, 0, i-1);
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

	heapify(a, n);

	heap_sort(a, n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}