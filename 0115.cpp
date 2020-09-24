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

int NG(int num, int lim, int k) {
	if (lim < k * (k + 1) / 2)
		return 1;
	if (k * (2 * num - k + 1) / 2 < lim)
		return 1;
	return 0;
}

int main(void) {
	int num, i, lim, k, sum;
	cin >> num >> lim >> k;
	vector<int> ans(k);
	sum = (1 + k) * k / 2;
	rep(i, k)
		ans[i] = i + 1;
	i = k - 1;
	while (i >= 0 && sum < lim) {
		int a = min(num - (k - i - 1), ans[i] + lim - sum);
		sum += a - ans[i];
		ans[i] = a;
		i--;
	}
	if (num < k || sum != lim)
		printf("-1");
	else {
		rep(i, k)
			cout << ans[i] << " ";
	}
	printf("\n");
	return 0;
}