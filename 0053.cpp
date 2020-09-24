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

double Pow(double n, ll k) {
	double ans = 1, a = n;
	while (k > 0) {
		if (k & 1) {
			ans *= a;
		}
		a *= a;
		k >>= 1;
	}
	return ans;
}

int main(void) {
	int num, i;
	cin >> num;
	num++;
	double ans = 16.0 / 3.0 * Pow(3.0, num) * Pow(1.0 / 4.0, num);
	printf("%.10lf\n", ans);
	return 0;
}