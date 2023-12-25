#include<iostream>
using namespace std;
class point {
private:
	int x = 60;
	int y = 80;
public:
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	point(int x, int y) {
		x = 60,y = 80;
	}
	void display() {
		cout << x << ' ' << y;
	}

};
int main() {
	int a, b, x=0, y=0;
	cout << "请输入两个值" << endl;
	cin >> a >> b;
	point A1(x, y);;
	A1.setPoint(a, b);
	A1.display();

}