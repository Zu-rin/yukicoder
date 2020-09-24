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

int main(void) {
	int num, i, j, x, q, a;
	cin >> q;
	rep(x, q) {
		cin >> num;
		int ans = 0;
		map<int, int> mp;
		priority_queue<pp> que;
		rep(i, num) {
			cin >> a;
			mp[a]++;
		}
		for (auto it = mp.begin(); it != mp.end(); it++) {
			que.push(pp((*it).second, (*it).first));
		}
		while (que.size() >= 3) {
			queue<pp> q;
			ans++;
			rep(i, 3) {
				q.push(que.top());
				que.pop();
			}
			rep(i, 3) {
				pp& p = q.front();
				p.first--;
				if (p.first)
					que.push(q.front());
				q.pop();
			}
		}
		cout << ans << "\n";
	}
	return 0;
}