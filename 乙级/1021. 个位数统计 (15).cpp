#include <string>
#include <iostream>
using namespace std;
int main() {
	int count[10] = { 0 };
	int t = 0;
	string a;
	cin >> a;
	for (const auto &b : a) {
		int c = b - '0';
		count[c]++;
	}
	for (int i = 0; i<10; i++) {
		if (count[i] != 0) {
			if (t == 0)
			{
				cout << i << ':' << count[i];
				t = 1;
			}
			else {
				cout << endl << i << ':' << count[i];
			}
		}
	}
	system("pause");
}