#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string s;
	cin >> s;
	int sum = 0;
	for (const char &c : s) {
		int t = c - '0';
		sum += t;
	}
	int arr[3] = { 0 };
	int count = 0;
	while (sum != 0) {
		arr[count] = sum % 10;
		sum /= 10;
		count++;
	}
	vector<string> outArr = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	for (int i = count - 1; i > -1; i--) {
		
		cout << outArr[arr[i]];
		if (i != 0)
			cout << ' ';
	}
	system("pause");
}
/*
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/