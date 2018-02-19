#include <iostream>
#include <vector>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	vector<int> v1(n);
	vector<int> v2(n);

	for (int j = 0; j<n; j++) {
		cin >> v1[j];
	}
	for (int j = 0; j<n; j++) {
		cin >> v2[j];
	}
	for (int i = 0; i<m; i++) {
		int sum = 0;
		for (int j = 0; j<n; j++) {
			int t;
			cin >> t;
			if (t == v2[j])
				sum += v1[j];
		/*	if (t == v2[i])
				sum += v1[i];
				ÏÂ±ê´íÎó
				*/
		}
		cout << sum;
		if (i != m - 1)
			cout << endl;
	}
	system("pause");
}
