#include<iostream>
using namespace std;
int main() {
	int a[10];
	int b[10];
	int n = 0, m = 0;
	cout << "ÇëÊäÈëÊý×Ö" << endl;
	for (int i = 0; i <= 9; i++) {
		cin >> a[i];
	}
	memcpy(b, a, 40);
	for (int i = 0; i <= 9; i++) {
		for (int k = i+1; k <= 9; k++) {
			if (b[i] == a[k]) {
				b[i] = 0;

			}
		}
	}

	for (int i = 0; i <= 9; i++) {
		if (b[i] != 0) {
			cout << b[i] << ' ';
		}
	}





}