#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int a, b, c, f = 0;
	a = strlen(s1);
	b = strlen(s2);
	int d[1000] = { 0 };
	for (int i = 0; i < b - a + 1; i++) {
		for (int j = 0, m = i; j < a ; j++, m++) {
			if (s1[j] == s2[m]) {
				c = i;
				f = j;
				d[j] = 1;
			}
			int e = 0;
			for (int k = 0; k < a; k++) {
				if (d[k] == 0 && i == b - a) {
					return 0;
					break;
				}
				if (d[k] == 1) {
					e++;
				}
			}
			if (e == a) {
				return c;

		}
		}

	}
}
int main() {
	char a[100];
	char b[100];
	int i = 0, j = 0;
	cout << "Enter the first string:";
	cin.getline(a, 100);
	cout << "Enter the second string:";
	cin.getline(b, 100);
	cout << "indexOf" <<' ' << a <<' '<< b <<' '<< "is" << ' ' << indexOf(a, b);




}