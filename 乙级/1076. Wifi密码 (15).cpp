#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		bool flag = false;
		for (int j = 0; j < 4; j++) {
			cin >> s;
			if (flag == false) {
				if (s[2] == 'T') {
					cout << s[0] - 'A' + 1;
					flag = true;
				}
			}
		}
	}



}