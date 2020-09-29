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

int Search(int n, vector<int> &d, vector<int>& dp) {
	if (n >= dp.size())
		return 0;
	if (dp[n])
		return dp[n];
	return dp[n] = max(Search(n + 2, d, dp), Search(n + 3, d, dp)) + d[n];
}

int Search(int n, vector<int>& d) {
	vector<int> dp(d.size(), 0);
	return Search(n, d, dp);
}

int main(void) {
	int num, i, ans;
	cin >> num;
	vector<int> d(num);
	rep(i, num)
		cin >> d[i];
	ans = max(Search(0, d), Search(1, d));
	cout << ans << "\n";
	return 0;
}