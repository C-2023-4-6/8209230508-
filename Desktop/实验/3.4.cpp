#include<iostream>
#include"mytriangle.h.cpp"
using namespace std;
int main() {
	int side1, side2, side3;
	cout << "�����������α߳�" << endl;
	cin >> side1 >> side2 >> side3;
	is_valid(side1, side2, side3);
	if (is_valid(side1, side2, side3) == 1) {

		cout << "������ȷ" << endl;
		cout << _area(side1, side2, side3) << endl;

	}
	else {
		cout << "�޷�����������" << endl;
	}
}