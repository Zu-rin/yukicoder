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

double Search(int n, const int k, vector<double> & dp) {
	if (n >= k)
		return 0.0;
	if (dp[n] != 0.0)
		return dp[n];
	int i;
	for (i = 1; i <= 6; i++)
		dp[n] += Search(n + i, k, dp);
	dp[n] /= 6.0;
	dp[n] += 1.0;
	return dp[n];
}

int main(void) {
	int num, i, k;
	double ans;
	cin >> k;
	vector<double> dp(k, 0.0);
	dp[k - 1] = 1;
	ans = Search(0, k, dp);
	printf("%.10lf\n", ans);
	return 0;
}
