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
	int num, i, j;
	vector<int> e(10000, true), d(10001, 0);
	list<int> p;
	e[0] = e[1] = 0;
	rep(i, e.size()) {
		if (e[i]) {
			p.push_back(i);
			for (j = i << 1; j < e.size(); j += i)
				e[j] = 0;
		}
	}
	d[2] = d[3] = 0;
	for(i = 2; i < d.size(); i++) {
		if (d[i] & 1)
			continue;
		for (auto it = p.begin(); it != p.end(); it++) {
			j = i + *it;
			if (j >= d.size())
				break;
			d[j] = 1;
		}
	}
	cin >> num;
	if (d[num])
		printf("Win\n");
	else
		printf("Lose\n");
	return 0;
}