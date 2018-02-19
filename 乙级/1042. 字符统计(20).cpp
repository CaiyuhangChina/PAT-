#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int count[26] = { 0 };
	getline(cin, s);
	for (const auto & a : s) {
		if ((a >= 'a'&&a <= 'z'))
		{
			count[a - 'a']++;
		}
		if ((a >= 'A'&&a <= 'Z'))
		{
			count[a - 'A']++;
		}
	}
	int max = 0;
	for (int i = 0; i < 25; i++) {
		if (count[i] > count[max]) {
			max = i;
		}
	}
	char cc = max + 'a';
	cout << cc << ' ' << count[max];
}
