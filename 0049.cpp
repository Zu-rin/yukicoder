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
	int i, a, b;
	string s, c = "*";
	cin >> s;
	s += "+";
	a = b = 0;
	rep(i, s.size()) {
		if (s[i] == '+' || s[i] == '*') {
			if (c == "*")
				a += b;
			else
				a *= b;
			c = s[i];
			b = 0;
		}
		else
			b = 10 * b + (s[i] - '0');
	}
	cout << a << "\n";
	return 0;
}