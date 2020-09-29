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

int main(void) {
	int ans = 0, i, x, y, l;
	cin >> x >> y >> l;
	if (y < 0)
		ans = 2;
	else if (x != 0)
		ans = 1;
	x = abs(x);
	y = abs(y);
	ans += x / l;
	ans += y / l;
	if (x % l)
		ans++;
	if (y % l)
		ans++;
	cout << ans << "\n";
	return 0;
}