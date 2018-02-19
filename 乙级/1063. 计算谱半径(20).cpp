#include <iomanip>
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a, b;
	double max = 0;
	for (int i = 0; i<n; i++) {
		cin >> a >> b;
		double t = sqrt(a*a + b * b);
		if (t > max)
			max = t;
	}
	printf("%.2f", max);
}