#include<iostream>
using namespace std;
int m = 0;
int num(int n) 
{
	m = m + 1;
	if (m == 10) {
		return n;
	}
	else {
		return num((n + 1) * 2);
	}	

}
int main() 
{
	int k;
	cout << "�������������Ӹ���" << endl;
	cin >> k;
	cout << num(k) << endl;
	return 0;

}