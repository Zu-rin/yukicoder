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
	int num, i, j, a;
	cin >> num;
	vector<ll> d(101, 0);
	vector<vector<ll>> dp(3, vector<ll>(101, 0));
	rep(i, num) {
		cin >> a;
		d[a]++;
	}
	rep(i, 100)
		dp[0][i + 1] += dp[0][i] + d[i + 1];
	for(i = 1; i < 3; i++) {
		for (j = 1; j <= 100; j++) {
			dp[i][j] = dp[i - 1][j - 1] * d[j] + dp[i][j - 1];
		}
	}
	cout << dp[2][100] % MOD << "\n";
	return 0;
}