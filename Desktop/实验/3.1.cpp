#include<iostream>
using namespace std;
int max(int a, int b) {
	int c = 0;
	if (a <= b) {
		c = a;
	}
	else {
		c = b;
	}
	for (;;c--) {
		if (a % c == 0 && b % c == 0) {
			break;
		}
	}

	return c;
}
int min(int a, int b) {
	int c = 0;
	if (a <= b) {
		c = b;
	}
	else {
		c = a;
	}
	for (;; c++) {
		if (c % a == 0 && c % b == 0) {
			break;
		}
	}

	return c;
}
int main() {
	int x, y;
	cout << "请输入两个数" << endl;
	cin >> x >> y;
	cout << max(x, y) << endl;
	cout << min(x, y) << endl;
	return 0;
}