#include <iostream>
#include <string>
using namespace std;
int main() {
	long long sum = 0;
	string s;
	getline(cin, s);
	for (const char &c : s) {
		if (isalpha(c)) {
			char t = tolower(c);
			sum += t - 'a'+1;
		}

	}
	int count1 = 0;
	int count = 0;
	while (sum != 0) {
		count1 += sum & 1;
		sum >>= 1;
		count++;
	}
	cout << count-count1<<' '<<count1;
	system("pause");
}