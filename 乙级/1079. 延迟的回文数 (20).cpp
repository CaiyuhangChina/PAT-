//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//string add(string s);
//int main() {
//
//	string s;
//	cin >> s;
//	string temp=s;
//	reverse(temp.begin(), temp.end());
//	if (temp == s)
//	{
//		cout << s << " is a palindromic number.";
//		return 0;
//	}
//	for (int i = 0; i < 10; i++) {
//		string a = s;
//		string temp=s;
//		s = add(s);
//		reverse(temp.begin(), temp.end());
//		cout << a<< " + " << temp << " = "<<s<<endl;
//
//		if (temp == a)
//		{
//			cout << a<< " is a palindromic number.";
//			return 0;
//		}
//	
//
//
//	}
//	cout << "Not found in 10 iterations.";
//}
//string add(string s) {
//	string temp = s;
//	string sum;
//	reverse(temp.begin(), temp.end());
//	int carry = 0;
//	for (int i = 0; i < s.length(); i++) {
//		int num = s[i] - '0' + temp[i] - '0' + carry;;
//		if (num > 10) {
//			carry = 1;
//			num -= 10;
//		}
//		else {
//			carry = 0;
//		}
//		sum += char(num + '0');
//	}
//	if (carry)
//		sum += '1';
//	reverse(sum.begin(), sum.end());
//	return sum;
//}