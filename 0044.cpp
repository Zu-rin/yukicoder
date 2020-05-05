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

ll Search(int n, vector<ll> & dp) {
	if (n >= dp.size())
		return 0;
	if (dp[n])
		return dp[n];
	return dp[n] = Search(n + 1, dp) + Search(n + 2, dp);
}

int main(void) {
	int num, i;
	cin >> num;
	vector<ll> dp(num + 1, 0);
	dp[num] = 1;
	cout << Search(0, dp) << "\n";
	return 0;
}
