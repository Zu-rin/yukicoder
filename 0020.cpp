#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <tuple>
#include <algorithm>
#define rep(i, n) for(i = 0; i < (n); i++)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define MOD 1000000007
#define PI 3.14159265358979323846
#define INF 1 << 30

using namespace std;
typedef long long ll;
typedef struct Point_Coordinates {
	int i, j;
} point;

typedef tuple<int, int, int> pp;

int Dijk(const point& s, const point& e, vector<vector<int>>& d) {
	int k;
	vector<vector<int>> ans(d.size(), vector<int>(d.size(), INF));
	vector<point> dl = { {1,0}, {0,1}, {-1,0}, {0,-1} };
	priority_queue<pp, vector<pp>, greater<pp>> que;
	ans[s.i][s.j] = 0;
	rep(k, 4) {
		point n = { s.i + dl[k].i, s.j + dl[k].j };
		if (d[n.i][n.j] != INF)
			que.push(make_tuple(d[n.i][n.j], n.i, n.j));
	}
	while (!que.empty()) {
		point a = { get<1>(que.top()), get<2>(que.top()) };
		int c = get<0>(que.top());
		que.pop();
		if (ans[a.i][a.j] == INF) {
			ans[a.i][a.j] = c;
			rep(k, 4) {
				point dn = { a.i + dl[k].i, a.j + dl[k].j };
				if (ans[dn.i][dn.j] == INF && d[dn.i][dn.j] != INF)
					que.push(make_tuple(c + d[dn.i][dn.j], dn.i, dn.j));
			}
		}
	}
	return ans[e.i][e.j];
}

int main(void) {
	int num, i, j, V, ans, ok = false;
	point os;
	cin >> num >> V >> os.j >> os.i;
	vector<vector<int>> d(num + 2, vector<int>(num + 2, INF));
	for(i = 1; i <= num; i++) {
		for(j = 1; j <= num; j++)
			cin >> d[i][j];
	}
	ans = Dijk({ 1,1 }, { num, num }, d);
	if (ans < V)
		ok = true;
	else if (os.i != 0) {
		ans = Dijk({ 1,1 }, os, d);
		V -= ans;
		V *= 2;
		ans = Dijk(os, { num, num }, d);
		if (ans < V)
			ok = true;
	}
	if (ok)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
