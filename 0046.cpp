#include <iostream>
using namespace std;

int main(void) {
	int a, b, ans;
	cin >> a >> b;
	ans = b / a;
	if (b%a)
		ans++;
	cout << ans << "\n";
	return 0;
}