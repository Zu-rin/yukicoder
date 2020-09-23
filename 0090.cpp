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
	int num, m, i, ans = 0;
	cin >> num >> m;
	vector<int> d(num), a(m), b(m), s(m);
	rep(i, m) {
		cin >> a[i] >> b[i] >> s[i];
	}
	rep(i, num)
		d[i] = i;
	do {
		int x = 0;
		rep(i, m) {
			if (d[a[i]] < d[b[i]])
				x += s[i];
		}
		chmax(ans, x);
	} while (next_permutation(d.begin(), d.end()));
	cout << ans << "\n";
	return 0;
}