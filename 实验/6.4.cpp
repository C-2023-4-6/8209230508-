#include<iostream>
using namespace std;
class score {
public:
	int num;
	int mark;
	score(int a, int b) {
		this->num = a; this->mark = b;
	}
};
void max(score *p) {
	bool changed = true;
	do {
		changed = false;
		for (int i = 0; i < 4; i++) {
			if (p->mark < (p+i)->mark) {
				score b(0,0);
				b = *p;
				*p = *(p + i);
				*(p + i) = b;
				changed = true;
			}
		}
	} while (changed);
}
int main() {
	int b[5], c[5];
	for (int i = 0; i < 4; i++) {
		cin >> b[i];
		cin >> c[i];
	}
	score A1(b[0], c[0]);
	score A2(b[1], c[1]);
	score A3(b[2], c[2]);
	score A4(b[3], c[3]);
	score A5(b[4], c[4]);
	score a[5] = { A1,A2,A3,A4,A5 };
	score* p = a;
	max(p);
	cout << a[0].num << endl;
}
