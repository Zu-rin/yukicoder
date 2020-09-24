#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int num, x, b, i, ans = 0;
	cin >> num >> x;
	vector<int> d(100001, 0), a(num);
	for (i = 0; i < num; i++) {
		scanf_s("%d", &a[i]);
		d[a[i]]++;
	}
	for (i = 0; i < num; i++) {
		b = x - a[i];
		if (b >= 0 && b <= 100000)
			ans += d[b];
	}
	cout << ans << "\n";
	return 0;
}