#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <map>
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

vector<pp> d;

int Judge(int v, vector<int> win) {
	int i, ans = 1;
	rep(i, d.size()) {
		if (v & (1 << i))
			win[d[i].first]++;
		else
			win[d[i].second]++;
	}
	map<int, int, greater<int>> mp;
	rep(i, win.size())
		mp[win[i]];
	for (auto it = mp.begin(); (*it).first != win[0]; it++)
		ans++;
	return ans;
}

int Search(int n, int v, vector<int> & win) {
	if (n == d.size())
		return Judge(v, win);
	int ans = Search(n + 1, v << 1, win);
	chmin(ans, Search(n + 1, (v << 1) + 1, win));
	return ans;
}

int main(void) {
	int num, i, j, ans;
	cin >> num;
	vector<string> s(num);
	vector<int> win(num, 0);
	rep(i, num) {
		cin >> s[i];
		rep(j, num) {
			if (s[i][j] == 'o')
				win[i]++;
		}
	}
	rep(i, num - 1) {
		for (j = i + 1; j < num; j++) {
			if (s[i][j] == '-')
				d.push_back(make_pair(i, j));
		}
	}
	ans = Search(0, 0, win);
	cout << ans << "\n";
	return 0;
}
