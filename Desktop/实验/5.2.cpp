#include<iostream>
using namespace std;
int indexof(const char* const hexstring) {
	int a;
	int sum = 0, j = 0;
	a = strlen(hexstring);
	for (int i = 0; i < a; i++) {
		if (hexstring[i] >= 'A' && hexstring[i] <= 'F') {
			j = static_cast<int>(hexstring[i] - 55) * pow(16, a - i - 1);
		}
		else {
			j = static_cast<int>(hexstring[i] - 48) * pow(16, a - i - 1);
		}
		sum = sum + j;
		j = 0;
	}
	return sum;

}
int main() {
	char string[100];
	cout << "请输入" << endl;
	cin.getline(string, 100);
	cout << "结果为: " << indexof(string) << endl;
}
