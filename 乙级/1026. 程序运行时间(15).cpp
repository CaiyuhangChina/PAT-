#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned c1, c2, c;
	cin >> c1 >> c2;
	unsigned h, m, s;
	unsigned diff = (c2 - c1);
	if (diff % 100 >= 50)//这里考虑了除法截尾的特性
		c = 1;
	else c = 0;
	diff = diff / 100 + c;
	s = diff % 60;
	diff /= 60;
	m = diff % 60;
	diff /= 60;
	h = diff;
	cout << setfill('0')<<setw(2) << h << setw(1) << ':' << setw(2) << m << setw(1) << ':' << setw(2) << s;

}