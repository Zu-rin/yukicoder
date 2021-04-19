#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <algorithm>
#define rep(i, n) for(i = 0; i < (n); i++)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define MOD 1000000007
#define PI 3.14159265358979323846
#define INF 1 << 30

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

ll nC2(ll n) {
	if (n <= 1)
		return 0;
	return n * (n - 1) / 2;
}

int main(void) {
	ll i, num, a = 0, b = 0, x, ans = 0;
	cin >> num;
	rep(i, num) {
		cin >> x;
		if (x == 1)
			a++;
		else if (x == 2)
			b++;
	}
	ans += a * b * 3;
	ans += (nC2(a) + a * (num - a - b)) * 2;
	ans += nC2(num - a);
	cout << ans << "\n";
	return 0;
}