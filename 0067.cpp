#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <cmath>
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

double Search(double l, double r, const ll k, vector<double> & d, int s) {
	if (r - l < 0.000000001 || s == 200)
		return l;
	s++;
	double p = (l + r) / 2.0;
	ll i, sum = 0;
	rep(i, d.size())
		sum += d[i] / p;
	if (sum >= k)
		return Search(p, r, k, d, s);
	else
		return Search(l, p, k, d, s);
}

int main(void) {
	ll num, i, k;
	double ans, ma = 0;
	cin >> num;
	vector<double> d(num);
	rep(i, num) {
		cin >> d[i];
		chmax(ma, d[i]);
	}
	cin >> k;
	ans = Search(0.0, ma * (double)num / (double)k, k, d, 0);
	printf("%.15lf\n", ans);
	return 0;
}