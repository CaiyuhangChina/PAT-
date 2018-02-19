#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct s {
	string s1;
	int s2;
	int s3;
};

int main() {
	int n;
	cin >> n;
	vector<s> vs(n);
	for (int i = 0; i<n; i++) {
		cin >> vs[i].s1 >> vs[i].s2 >> vs[i].s3;
	}
	int m;
	cin >> m;
	for (int i = 0; i<m; i++) {
		int t;
		cin >> t;
		for (int j = 0; j<n; j++) {
			if (vs[j].s2 == t) {
				cout << vs[j].s1 << ' ' << vs[j].s3;
				break;
			}
		}
		if (i != m - 1)
			cout << endl;
	}
}