//#include <iostream>
//#include <cstdio>
//using namespace std;
//char arr[]{ 'B','C','J' };
//int find_index(char c) {
//	for (int i = 0; i < 3; i++) {
//		if (c == arr[i])
//			return i;
//	}
//	return -1;
//}
//int result(char a, char b) {
//
//	int ia, ib;
//	ia = find_index(a);
//	ib = find_index(b);
//	if (ia == ib)
//		return 0;
//	if ((ia + 1) % 3 == ib)
//		return 1;
//	else return 2;
//}
//int main() {
//	long long n;
//	cin >> n;
//	int jy = 0, yy = 0, p = 0;
//	int jyp[3] = {}, yyp[3] = {};
//	char a, b;
//	for (long long i = 0; i < 10; i++) {
//		cin >> a >> b;
//		int r = result(a, b);
//		int index;
//		switch (r) {
//		case 0:p++; break;
//		case 1:jy++; jyp[find_index(a)]++; break;
//		case 2:yy++; yyp[find_index(b)]++; break;
//		default:break;
//		}
//	}
//	int max1 = 0;
//	int max2 = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		if (jyp[i] > jyp[max1])
//			max1 = i;
//		if (yyp[i] > yyp[max2])
//			max2 = i;
//	}
//	cout << jy << ' ' << p << ' ' << n - jy - p << endl << yy << ' ' << p << ' ' << n - yy - p << endl << arr[max1] << ' ' << arr[max2]<<endl;
//	//printf("%d %d %d\n%d %d %d\n%c %c",jy,p,n-jy-p,yy,p,n-yy-p,arr[max1],arr[max2]);
//	system("pause");
//}