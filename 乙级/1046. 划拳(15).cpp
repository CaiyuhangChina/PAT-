#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, n, c1 = 0, c2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c >> d;
		int sum = a + c;
		if (b == d)
			continue;
		else
		{
			if (b == sum)
				c2++;
			if (d == sum)
				c1++;
		}
	}
	cout << c1 << ' ' << c2;
}