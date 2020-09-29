#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <map>
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

int main(void) {
	int num, i, m, n;
	ll w, h, ans = 0;
	cin >> w >> h >> num;
	map<int, char> a, b;
	rep(i, num) {
		cin >> m >> n;
		a[m], b[n];
	}
	ans = (ll)a.size() * h + (ll)b.size() * w;
	ans -= (ll)a.size() * (ll)b.size();
	ans -= num;
	cout << ans << "\n";
	return 0;
}