#include <iostream>
using namespace std;

int main() {
	int n, k, count = 0, * a;

	cin >> n >> k;

	// ���� ������ �Ҵ����ִ� ����? 
	// ���� �������� �Է��� ������ �����̴�.
	a = new int[n];


	for (int i = n - 1; i >= 0; i--)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (k == k % a[i]) continue;
		count += (k / a[i]);
		k %= a[i];
	}

	cout << count << endl;
}