#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int fun(int n) {
	int sum = 0;
	while (n != 0) {
		sum = sum  + n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	int n, t;
	vector<int> v;
	cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> t;
		t = fun(t);
		if (find(v.begin(), v.end(),t)!= v.end())
			continue;
		v.push_back(t);
	}
	cout << v.size();
	for (int i = 0; i<v.size(); i++) {
		cout << v[i];
		if (i != v.size() - 1)
			cout << ' ';
	
	}
	system("pause");
}