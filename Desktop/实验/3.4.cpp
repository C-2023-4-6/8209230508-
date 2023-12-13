#include<iostream>
#include"mytriangle.h.cpp"
using namespace std;
int main() {
	int side1, side2, side3;
	cout << "请输入三角形边长" << endl;
	cin >> side1 >> side2 >> side3;
	is_valid(side1, side2, side3);
	if (is_valid(side1, side2, side3) == 1) {

		cout << "输入正确" << endl;
		cout << _area(side1, side2, side3) << endl;

	}
	else {
		cout << "无法构成三角形" << endl;
	}
}