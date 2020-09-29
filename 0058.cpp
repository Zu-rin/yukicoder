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
	int num, i, j, x, k;
	ll sum = 0, win = 0, bsum = 0;
	double ans;
	cin >> num >> k;
	vector<vector<int>> a(num + 1, vector<int>(num * 6 + 1, 0)), b(num + 1, vector<int>(num * 6 + 1, 0));
	a[0][0] = b[0][0] = 1;
	rep(i, k) {
		rep(j, a[i].size() - 6) {
			for (x = 1; x <= 6; x++)
				a[i + 1][j + x] += a[i][j];
			for (x = 4; x <= 6; x++)
				b[i + 1][j + x] += b[i][j] << 1;
		}
	}
	for (; i < num; i++) {
		rep(j, a[i].size() - 6) {
			for (x = 1; x <= 6; x++) {
				a[i + 1][j + x] += a[i][j];
				b[i + 1][j + x] += b[i][j];
			}
		}
	}
	j = 0;
	for(i = 1, j = 0; i < a[num].size(); i++, j++){
		sum += a[num][j];
		win += sum * b[num][i];
	}
	sum += a[num][j];
	ans = (double)win / (double)(sum * sum);
	printf("%.10lf\n", ans);
	return 0;
}