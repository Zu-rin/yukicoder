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
	int num, i, ans = 0;
	vector<int> d(3);
	rep(i, 3)
		cin >> d[i];
	while (true) {
		sort(d.begin(), d.end(), greater<int>());
		ans += d[2];
		rep(i, 3) {
			d[i] -= d[2];
		}
		if (d[1] && d[0] >= 3) {
			d[0] -= 2;
			d[2]++;
		}
		else if (d[1] == 0 && d[0] >= 5) {
			d[0] -= 4;
			d[1]++;
			d[2]++;
		}
		if (!d[2])
			break;
	}
	cout << ans << "\n";
	return 0;
}