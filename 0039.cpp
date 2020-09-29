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

string Swap(string s, int a, int b) {
	char c = s[a];
	s[a] = s[b];
	s[b] = c;
	return s;
}

int main(void) {
	int num, i, j;
	string s, ans, buf;
	cin >> s;
	ans = s;
	rep(i, s.size()) {
		for (j = i + 1; j < s.size(); j++) {
			buf = Swap(s, i, j);
			if (buf > ans)
				ans = buf;
		}
	}
	cout << ans << "\n";
	return 0;
}