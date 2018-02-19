#include <iostream>
using namespace std;
int getPa(int a, int b) {
	int pa = 0;
	while (a != 0) {
		if (a % 10 == b) {
			pa = pa * 10 + b;
		}
		a /= 10;
	}
	return pa;
}
int main() {
	int a, b, p1, p2;
	cin >> a >> b;
	p1 = getPa(a, b);
	cin >> a >> b;
	p2 = getPa(a, b);
	cout << p1 + p2;
}
