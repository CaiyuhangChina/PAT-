#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sum[1001] = { 0 };
	for (int i = 0; i < n; i++)
	{
		string s;
		int name = 0;
		int score;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != '-') {
				name = name * 10 + (s[i] - '0');
			}
			else
				break;
		}
		cin >> score;
		sum[name] += score;
	}
	int max = 1;
	for (int i = 1; i < 1001; i++) {
		if (sum[max] < sum[i])
			max = i;
	}
	cout << max << ' ' << sum[max];
}