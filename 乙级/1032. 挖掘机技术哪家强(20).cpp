#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<long long> v(n+1);
	long long num, score;
	for (long long i = 0; i < n; i++) {
		cin >> num >> score;
		v[num] += score;
	}
	long long max = 0;
	for (long long i = 1; i < n+1; i++) {//±àºÅ´Ó1¿ªÊ¼
		if (v[max] < v[i])
			max = i;
	}
	cout << max << ' '<<v[max];
}