#include <iostream>

using namespace std;

int main(void) {
	int n, v, a = 0;
	cin >> n;
	for (; n > 0; n--) {
		scanf_s("%d", &v);
		a += v;
	}
	cin >> v;
	cout << a - v << "\n";
	return 0;
}