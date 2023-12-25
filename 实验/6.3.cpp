#include<iostream>
using namespace  std;
class volume {
public:
	int A, B, C;
	int max(int a, int b, int c) {
		int d = 0;
		d = a * b * c;
		return d;
	}
	volume(int A = 0, int B = 0, int C = 0) {
		this->A = A, this->B = B, this->C = C;
	}

};
int main(){

	int a[9] = { 0 };
	cout << "请输入三组长宽高" << endl;
	for (int i = 0; i <= 8; i++) {
		cin >> a[i];
	}
	volume C1(a[0], a[1], a[2]);
	volume C2(a[3], a[4], a[5]);
	volume C3(a[6], a[7], a[8]);
	cout << C1.max(a[0], a[1], a[2]) << endl;
	cout << C2.max(a[3], a[4], a[5]) << endl;
	cout << C3.max(a[6], a[7], a[8]) << endl;

}