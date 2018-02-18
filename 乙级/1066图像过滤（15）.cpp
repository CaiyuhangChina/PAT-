#include <iomanip>
#include <iostream>
using namespace std;
int main() {
	int m, n, a, b, r;
	cin >> m >> n >> a >> b >> r;
	for (int i = 0; i<m; i++) {
		for (int j = 0; j<n; j++) {
			int t;
			scanf("%d", &t);
			if (t >= a && t <= b)
				t = r;
			if (j == 0) {
				printf("%03d", t);
			}
			else {
				printf(" %03d", t);
			}
		}
		cout << endl;
	}
}
