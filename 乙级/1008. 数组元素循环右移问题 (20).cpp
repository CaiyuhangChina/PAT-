#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int c = (n%m);//右移位数可能大于数组位数
	vector<int> v(m);
	int count = 0;
	for (int i = 0; i < m; i++)
		cin >> v[i];
	for (int i = m - c; i < m; i++)
	{
		cout << v[i];
		if (count != m - 1)
			cout << ' ';
		count++;
	}
	for (int i =0; i < m-c; i++)
	{
		cout << v[i];
		if (count != m - 1)
			cout << ' ';
		count++;
	}
	system("pause");
}