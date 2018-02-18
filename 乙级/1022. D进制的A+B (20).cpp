#include <iostream>
#include <stack>
using namespace std;
int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c;
	d = a + b;
	e = abs(e);
	if (d == 0) {
		cout << d;
		return 0;
	}
	stack<int> s;
	while (d != 0) {
		s.push(d%c);
		d /= c;
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}