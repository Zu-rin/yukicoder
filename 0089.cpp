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
	double c, a, b, s, ans;
	cin >> c >> a >> b;
	s = PI * PI * (a + b) * (b - a) * (b - a) / 4.0;
	ans = s * c;
	printf("%.10lf\n", ans);
	return 0;
}