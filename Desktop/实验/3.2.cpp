#include<iostream>
using namespace std;
bool is_prime(int num) {
	int i = 0;
	i = num - 1;
	for (;; i--) {
		if (i == 1) {
			return true;
			break;
		}
		else {
			if (num % i == 0) {
				return false;
				break;
			}
		}
	}

}
int main() {
	int k = 0;
	
		for (int n = 2;; n++) {
			if (is_prime(n) == 1) {
				k = k + 1;
				if ((k-1) % 10 == 0) {
					cout << '\n';
				}
				if (k == 201) {
					break;
				}
				else {
					cout << n << ' ';
				}
			}

		}
	
}


