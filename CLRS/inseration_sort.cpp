#include<bits/stdc++.h>
using namespace std;

void inseration_sort(int* a, int n) {
	for (int i = 1; i < n; ++i)
	{
		int tmp = a[i];
		for (int j = i; j >= 0; j--)
		{
			if(a[j-1] > tmp) {
				a[j] = a[j-1];
			}
			else {
				a[j] = tmp;
				break;
			}
		}
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

	inseration_sort(a, n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}