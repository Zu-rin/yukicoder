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
	int num, k, i, ans = 1;
	cin >> num >> k;
	for (i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			chmax(ans, num / i);
		}
	}
	cout << ans << "\n";
	return 0;
}