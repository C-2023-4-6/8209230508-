#include<iostream>
using namespace std;
void range(int p[], int size) {
	bool changed = true;
	do {
		changed = false;
		for (int i = 0; i < size - 1; i++) {
			if (p[i] > p[i + 1]) {
				swap(p[i], p[i + 1]);
				changed = true;
			}
		}
	} while (changed);

}
int main() {
	int size = 0, a = 0;
	cout << "������Ԫ�ظ���" << endl;
	cin >> size;
	int* p = new int [size];
	cout << "������Ԫ��" << endl;
	for (int i = 0; i < size; i++) {
		cin >> *(p + i);
	}
	cout << "��������Ҫ�۲��ָ��" << endl;
	cin >> a;
	cout << "ָ��ָ��" << *(p + a - 1) << endl;
	range(p, size);
	for (int j = 0; j < size; j++) {
		cout << *(p + j) << ' ';
	}
	delete p;
	return 0;
}