#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <set>
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

void DFS(int n, int dep, vector<list<pp>> & d, vector<int> & t, set<int> &ans, vector<vector<int>> &dp) {
	if (dep == t.size()) {
		ans.insert(n);
		return;
	}
	if (dp[n][dep])
		return;
	dp[n][dep] = 1;
	int& x = t[dep];
	for (auto it = d[n].begin(); it != d[n].end(); it++) {
		if ((*it).first == x) {
			DFS((*it).second, dep + 1, d, t, ans, dp);
		}
	}
	return;
}

int main(void) {
	int num, m, k, i, a, b, c;
	cin >> num >> m >> k;
	vector<list<pp>> d(num + 1);
	vector<vector<int>> dp(num + 1, vector<int>(k, 0));
	vector<int> t(k);
	set<int> ans;
	rep(i, m) {
		cin >> a >> b >> c;
		d[a].push_back(pp(c, b));
		d[b].push_back(pp(c, a));
	}
	rep(i, k) {
		cin >> t[i];
	}
	for (i = 1; i <= num; i++) {
		DFS(i, 0, d, t, ans, dp);
	}
	cout << ans.size() << "\n";
	for (auto it = ans.begin(); it != ans.end(); it++) {
		cout << *it << " ";
	}
	printf("\n");
	return 0;
}