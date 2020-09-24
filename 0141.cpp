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

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void) {
	int a, b, g, ans = 0;
	cin >> a >> b;
	g = gcd(a, b);
	a /= g;
	b /= g;
	while (a != b) {
		ans++;
		if (a < b) {
			int buf = a;
			a = b;
			b = buf;
		}
		else {
			a -= b;
		}
	}
	cout << ans << "\n";
	return 0;
}