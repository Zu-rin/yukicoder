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

int reqs(int k) {
	k++;
	return (k * k) >> 2;
}

int main(void) {
	int num, i, k = 1, ans = INF, s = 0, n;
	cin >> num;
	vector<int> d(num * 100);
	rep(i, num) {
		cin >> d[i];
		s += d[i];
	}
	while (reqs(k) <= s) {
		n = s;
		rep(i, k >> 1) {
			n -= min(d[i], i + 1);
			n -= min(d[k - i - 1], i + 1);
		}
		n -= min(d[i], (k + 1) >> 1);
		chmin(ans, n);
		k += 2;
	}
	cout << ans << "\n";
	return 0;
}
