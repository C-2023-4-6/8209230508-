#include<iostream>
using namespace std;
int main()
{
	double list[10];
	bool changed = true;
	int listSize = 10;
	for (int i = 0; i <= 9; i++) {
		cin >> list[i];
	}
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++) {
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]);
				changed = true;
			}
		}
	} 
	while (changed);
	for (int i = 0; i <= 9; i++)
		cout << list[i]<<' ';



}