#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {

	for (int i = 0; i < 1000; i++) {
		counts[s[i] - 'a']++;
		counts[s[i] - 'A']++;
	}
	for (int j = 0; j < 26; j++) {
		if (counts[j]!= 0) {
			cout << static_cast<char>(j + 'a') << " : " << counts[j] << ' ' << "times" << endl;

		}
	}


}
int main() {
	char a[1000];
	int b[26] = { 0 };
	cout << "ÇëÊäÈë×Ö·û´®" << endl;
	cin.getline(a, 1000);
	count(a, b);
	

}