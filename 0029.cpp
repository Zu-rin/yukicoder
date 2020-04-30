#include <iostream>

using namespace std;

int main(void) {
	int item[10] = { 0 }, num, i = 0, a;
	cin >> num;
	for (; i < num * 3; i++) {
		scanf_s("%d", &a);
		item[a - 1]++;
	}
	a = 0; num = 0;
	for (i = 0; i < 10; i++) {
		while (item[i] > 1) {
			item[i] -= 2;
			a++;
		}
		num += item[i];
	}
	cout << num / 4 + a << "\n";
	return 0;
}