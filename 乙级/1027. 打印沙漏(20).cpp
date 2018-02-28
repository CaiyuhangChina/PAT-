#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	char c;
	cin >> c;
	int t = sqrt((n + 1) / 2);
	int count = n - (2 * t*t - 1);
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int j = 0; j < (t - i) * 2 - 1; j++)
			cout << c;
		cout << endl;
	}
	for (int i = 0; i < t-1; i++) {
		for (int j = t-i-2; j >0; j--)
			cout << ' ';
		for (int j = 0; j < 2*i+3; j++)
			cout << c;
		cout << endl;
	}
	cout << count;
	system("pause");
}