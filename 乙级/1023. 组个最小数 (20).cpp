#include <iostream>
#include <string>
using namespace std;
int main() {
	//string p;
	int count[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		//count[i] = p[2 * i] - '0';这里数字个数可能是两位数
		cin >> count[i];
	}
	if (count[0] != 0) {
		for (int i = 1; i < 10; i++) {
			if (count[i] != 0) {
				cout << i;
				count[i]--;
				break;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < count[i]; j++) {
			cout << i;
		}
	}
	//system("pause");
}