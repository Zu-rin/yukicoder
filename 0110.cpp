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

// nˆÈ‰º‚Ì—v‘f‚Ì’†‚ÅÅ‘å‚Ì“Y‚¦š‚ğ•Ô‚·
// n < min(d) : -1
// max(d) < n : d.size() - 1
int Binary_search(int n, vector<int> & d) {
	auto tag = upper_bound(d.begin(), d.end(), n);
	return distance(d.begin(), tag) - 1;
}

int Solve(vector<int> & a, vector<int> & b) {
	int ans = 0, lim =INF;
	while (true) {
		int p;
		if (ans & 1)
			p = Binary_search(lim, a);
		else
			p = Binary_search(lim, b);
		if (p < 0)
			return ans;
		lim = (ans & 1) ? a[p] - 1 : b[p] - 1;
		ans++;
	}
}

int main(void) {
	int num, i, ans;
	cin >> num;
	vector<int> a(num);
	rep(i, num)
		cin >> a[i];
	cin >> num;
	vector<int> b(num);
	rep(i, num)
		cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ans = max(Solve(a, b), Solve(b, a));
	cout << ans << "\n";
	return 0;
}