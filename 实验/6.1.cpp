#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:            // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	int H, M, S;
	Time(int H, int M, int S) {
		this->H = H, this->M = M, this->S = S;
	}
	int out(int H, int M, int S) {
		cout << hour << ":" << minute << ":" << sec << endl;
		return 0;
	}
	int in(int H, int M, int S) {
		cin >> hour >> minute >> sec;

		return 0;
	}

};
int main()
{
	int x = 0, y = 0, z = 0;
	Time t1(x,y,z);
	t1.in(x, y, z);
	t1.out(x, y, z);
	return 0;
}