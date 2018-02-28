//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	bool f = true;
//	int p[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	int a[11] = { 1,0,10,9,8,7,6,5,4,3,2 };
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//		int sum = 0;
//		for (int j = 0; j <= 17; j++) {
//			int t = s[j] - '0';
//			if (s[j] == 'X')
//				t = 10;
//			sum += t *p[j];
//		}
//		sum %= 11;
//		if (a[sum] == s[17]) {
//
//		}
//		else {
//			cout << s << endl;
//			f = false;
//		}
//
//
//	}
//	if (f) {
//		cout << "All passed";
//	}
//	system("pause");
//}