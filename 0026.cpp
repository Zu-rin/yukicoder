#include <iostream>

using namespace std;

int main(void) {
	int pos, num, i = 0, l, r;
	cin >> pos >> num;
	for (; i < num; i++) {
		scanf_s("%d%d", &l, &r);
		if (pos == l)
			pos = r;
		else if (pos == r)
			pos = l;
	}
	cout << pos << "\n";
	return 0;
}