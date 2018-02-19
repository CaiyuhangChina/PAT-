#include <iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	int count[10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		count[a]++;
	}
	int sum = 0;
	for (int i = 1; i < 10; i++) {
		if (count[i] != 0) {
			for (int j = 1; j < 10; j++) {
				if (j == i && count[i] > 1) {
					sum += j * 11;
				}
				if (j != i && count[j] > 0) {
					sum += 10 * i + j;
				}
			}
		}
	}
	cout << sum;
}