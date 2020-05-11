#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <algorithm>
#define rep(i, n) for(i = 0; i < (n); i++)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define MOD 1000007
#define PI 3.14159265358979323846
#define INF 1 << 30

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

ll Ans(ll n) {
	ll x = n >> 1;
	n %= MOD;
	x %= MOD;
	return (-x * x + n * x + n) % MOD;
}

int main(void) {
	ll n, ans;
	cin >> n;
	ans = Ans(n);
	while (ans < 0)
		ans += MOD;
	cout << ans << "\n";
	return 0;
}
