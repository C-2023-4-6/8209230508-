#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	for (; k <= size1 + size2-1; k++) {
		if (list1[i] >= list2[j]) {
			list3[k] = list2[j];
			j++;
			if (j == size2+1) {
				break;
			}
		}
		else{
			list3[k] = list1[i];
			i++;
			if (i == size1+1) {
				break;
			}

		}

	}
	if (size1 >= size2) {
		for (; k <= size1 + size2 - 1; k++) {
			list3[k] = list1[i];
			i++;
		}
	}
	else {
		for (; k <= size1 + size2 - 1; k++) {
			list3[k] = list2[j];
			j++;
		}
	}

}
int main() {
	int a[80];
	int b[80];
	int c[160];
	int i = 0, j = 0;
	cout << "Enter list1:";
	cin >> i;
	for (int k = 0; k <= i-1; k++) {
		cin >> a[k];
	}
	cout << "Enter list2:";
	cin >> j;
	for (int k = 0; k <= j-1; k++) {
		cin >> b[k];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int k = 0; k < i - 1; k++) {
			if (a[k] > a[k + 1]) {
				swap(a[k], a[k + 1]);
				changed = true;
			}
		}
	} while (changed);
	do
	{
		changed = false;
		for (int k = 0; k < j - 1; k++) {
			if (b[k] > b[k + 1]) {
				swap(b[k], b[k + 1]);
				changed = true;
			}
		}
	} while (changed);
	merge(a, i, b, j, c);
	cout << "the merged list:";
	for (int k = 0; k <= i + j-1; k++) {
		cout << c[k] << ' ';
	}




}