#include <iostream>
using namespace std;
int main() {
	int m, n;
	char c;
	cin >> m >> c;
	n = (m + 1) / 2;
	for (int i = 0; i<m; i++)
		cout << c;
	cout << endl;
	for (int i = 0; i<n - 2; i++) {
		cout << c;
		for (int j = 0; j<m - 2; j++)
			cout << ' ';
		cout << c << endl;

	}
	for (int i = 0; i<m; i++)
		cout << c;
}