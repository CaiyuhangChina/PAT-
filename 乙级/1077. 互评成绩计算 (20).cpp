#include <vector>
#include <iostream>
using namespace std;
int main() {
	int n, h;
	cin >> n >> h;
	for (int i = 0; i<n; i++) {
		
		int t, sum = 0, max = 0, min = h + 1, f,count=0;
		vector<int> v(n - 1);
		cin >> t;
		for (int j = 0; j<n - 1; j++) {
			cin >> f;
			if (f >= 0 && f <= h) {
				if (f>max)
					max = f;
				if (f<min)
					min = f;
				v[j] = f;
				count++;
			}
		}
		for (int j = 0; j<n - 1; j++) {
			sum += v[j];
		}
		sum = sum - min - max;
		int bb = 0;
		sum = sum * 10 / (count - 2);
		/*if (sum % 10 > 4)
			bb = 1;*/
		sum = sum  / 10+bb;//����������һ�����⣬���һ��ƽ��������Ҫ�������룬�ڶ�������Ҫ
		int cc = 0;
		sum = (sum + t) * 10 / 2;
		if (sum % 10 > 4)
			cc = 1;
		sum = sum / 10;
		sum += cc;
		cout << sum;
		if (i != n - 1)
			cout << endl;
	}
	system("pause");
}