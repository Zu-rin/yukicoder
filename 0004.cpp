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
	int num, i, j, sum = 0, a;
	cin >> num;
	vector<int>	dp(100 * num + 1, 0);
	dp[0] = true;
	rep(i, num) {
		cin >> a;
		sum += a;
		for(j = dp.size() - 1; j >= 0; j--) {
			if (dp[j])
				dp[j + a] = true;
		}
	}
	if ((sum & 1) || !dp[sum >> 1])
		printf("impossible\n");
	else
		printf("possible\n");
	return 0;
}