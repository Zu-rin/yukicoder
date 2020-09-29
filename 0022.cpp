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

map<int, int> mp;
int Search(int n, string & s) {
	int i = n + 1;
	while (s[i] != ')') {
		i = Search(i, s);
	}
	mp[n] = i;
	mp[i] = n;
	return i + 1;
}

int main(void) {
	int num, i, k;
	string s;
	cin >> num >> k >> s;
	s = '(' + s + ')';
	Search(0, s);
	cout << mp[k] << "\n";
	return 0;
}