#include <iostream>
using namespace std;
int main() {
	int count[62] = { 0 };
	char p1[1001], p2[1001];
	cin >> p1 >> p2;
	for (int i = 0; i < 1001; i++) {
		char c = p1[i];
		if (p1[i] == '\0') {
			break;
		}
		else
		{
			if (c >= '0'&&c <= '9') {
				count[c - '0']++;
			}
			else if (c >= 'A'&&c <= 'Z') {
				count[c - 'A' + 10]++;

			}
			else if (c >= 'a'&&c <= 'z') {
				count[c - 'a' + 36]++;
			}
		}
	}
	for (int i = 0; i < 1001; i++) {
		char c = p2[i];
		if (p2[i] == '\0') {
			break;
		}
		else
		{
			if (c >= '0'&&c <= '9') {
				count[c - '0']--;
			}
			else if (c >= 'A'&&c <= 'Z') {
				count[c - 'A' + 10]--;

			}
			else if (c >= 'a'&&c <= 'z') {
				count[c - 'a' + 36]--;
			}
		}
	}
	int c = 0;
	int c2 = 0;
	for (int i = 0; i < 62; i++) {
		if (count[i] < 0)
			c -= count[i];
		if (count[i] > 0)
			c2 += count[i];
	}
	if (c != 0)
		cout << "No " << c;
	else cout << "Yes " << c2;
}