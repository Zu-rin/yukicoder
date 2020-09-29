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
	int num, i, j, a;
	cin >> num;
	num++;
	vector<int> d(num), ans;
	rep(i, num)
		cin >> d[i];
	reverse(d.begin(), d.end());
	rep(i, num - 3)
		d[i + 2] += d[i];
	for(i = max(0, num - 3); i < num; i++){
		if (ans.size() || d[i])
			ans.push_back(d[i]);
	}
	reverse(ans.begin(), ans.end());
	if (ans.size() == 0)
		ans.push_back(0);
	cout << ans.size() - 1 << "\n";
	rep(i, ans.size() - 1)
		cout << ans[i] << " ";
	cout << ans[i] << "\n";
	return 0;
}