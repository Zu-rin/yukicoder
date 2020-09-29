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

int Mnts(string & s) {
	int i, p, h = 0, m = 0;
	p = s.find(':');
	rep(i, p) {
		h *= 10;
		h += s[i] - '0';
	}
	for (i = p + 1; i < s.size(); i++) {
		m *= 10;
		m += s[i] - '0';
	}
	return h * 60 + m;
}

int Mdelta(string& s, string& e) {
	int ans = Mnts(e) - Mnts(s);
	if (ans < 0)
		ans += 1440;
	return ans;
}

int main(void) {
	int num, i, ans = 0;
	string s, e;
	cin >> num;
	rep(i, num) {
		cin >> s >> e;
		ans += Mdelta(s, e);
	}
	cout << ans << "\n";
	return 0;
}