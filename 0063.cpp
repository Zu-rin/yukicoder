#include <iostream>

using namespace std;

int main(void) {
	int len, a;
	cin >> len >> a;
	if (len % (2 * a) == 0) {
		len /= 2 * a;
		len--;
	}
	else
		len /= 2 * a;
	cout << len * a << "\n";
	return 0;
}