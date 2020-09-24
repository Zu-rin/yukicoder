#include <iostream>

using namespace std;

int main(void) {
	int i, num, ans = 10;
	for (i = 1; i < 10; i++) {
		cin >> num;
		if (i != num) {
			ans = i;
			i++;
		}
	}
	cout << ans << "\n";
	return 0;
}