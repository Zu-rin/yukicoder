#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	long long n, x, a, b, p, q;
	cin >> n >> x >> a >> b;
	p = x / a;
	if (x % a > 0)
		p++;
	x = (1ll << (n - 1)) - x;
	q = x / b;
	if (x % b > 0)
		q++;
	cout << min(p, q) << "\n";
	return 0;
}