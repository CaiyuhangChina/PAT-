#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <int > v(n);
	int t;
	for (int i = 0; i<n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	t = (v[0] + v[1]) / 2;
	for (int i = 0; i<n - 2; i++) {
		t = (t + v[i + 2]) / 2;
	}
	cout << t;
}