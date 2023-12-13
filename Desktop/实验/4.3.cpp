#include<iostream>
using namespace std;
int main()
{
	bool list[101];
	for (int i=1; i <= 100; i++) {
		for (int k = 1; k <= 100; k++) {
			if (k % i == 0) {
				list[k] = not list[k];
			}
		}
	}
	for (int i = 1; i <= 100; i++) {
		if ( list[i]==0){
			cout << i << ' ';

		}
	}
}