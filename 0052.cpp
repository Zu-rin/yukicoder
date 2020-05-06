#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <map>
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

map<string, int> mp;
string s;
void Search(string t, int l, int r) {
	if (l == r) {
		mp[t + s[l]];
		return;
	}
	Search(t + s[l], l + 1, r);
	Search(t + s[r], l, r - 1);
	return;
}

int main(void) {
	int num, i, ans = 1;
	vector<int> d(26, 0);
	cin >> s;
	Search("", 0, s.size() - 1);
	cout << mp.size() << "\n";
	return 0;
}
