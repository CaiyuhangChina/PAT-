#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int count = 0;
	int c[6] = { 0 };
	for (const char & a : s) {
		switch (a) {
		case 'P':c[0]++; count++;
			break;
		case 'A':c[1]++; count++; break;
		case 'T':c[2]++; count++;
			break;
		case 'e':count++; c[3]++; break;
		case 's':c[4]++; count++;
			break;
		case 't':c[5]++; count++; break;
		default:break;
		}
	}
	int j = 0;
	while (count != 0) {	
		if (c[j] != 0) {
			switch (j) {
			case 0:cout << 'P'; break;
			case 1:cout << 'A'; break;
			case 2:cout << 'T'; break;
			case 3:cout << 'e'; break;
			case 4:cout << 's'; break;
			case 5:cout << 't'; break;
			default:break;
			}
			c[j]--;
			count--;
		}
		j = (j + 1) % 6;
	}
	system("pause");
}