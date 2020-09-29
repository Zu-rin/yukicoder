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

int Bitnum(int n) {
	int ans = 0;
	while (n > 0) {
		if (n & 1)
			ans++;
		n >>= 1;
	}
	return ans;
}

queue<int> que;
void Search(int n, vector<list<int>>& d, vector<int> &ans) {
	for (auto it = d[n].begin(); it != d[n].end(); it++) {
		if (ans[*it] < 0) {
			que.push(*it);
			ans[*it] = ans[n] + 1;
		}
	}
	if (que.empty())
		return;
	n = que.front();
	que.pop();
	Search(n, d, ans);
	return;
}

int main(void) {
	int num, i, a;
	cin >> num;
	vector<int> ans(num + 1, -1);
	vector<list<int>> d(num + 1);
	for (i = 1; i < d.size(); i++) {
		a = Bitnum(i);
		if (i - a > 0)
			d[i].push_back(i - a);
		if (i + a < d.size())
			d[i].push_back(i + a);
	}
	ans[1] = 1;
	Search(1, d, ans);
	cout << ans[num] << "\n";
	return 0;
}