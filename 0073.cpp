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

ll Func(ll n, ll x) {
	return x * (n - x) * (n - x - 1) / 2;
}

int main(void) {
	int num, i;
	ll x, ans = 1;
	string s = "hewrd";
	vector<int> d(26);
	rep(i, 26)
		cin >> d[i];
	rep(i, s.size())
		ans *= d[s[i] - 'a'];
	x = d['o' - 'a'] >> 1;
	ans *= x * (d['o' - 'a'] - x);
	x = ans;
	ans = 0;
	rep (i, d['l' - 'a']) {
		chmax(ans, x * Func(d['l' - 'a'], i));
	}
	cout << ans << "\n";
	return 0;
}