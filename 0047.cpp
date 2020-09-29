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

int Bitsize(int n) {
	int ans = 0;
	while (n > 0) {
		ans++;
		n >>= 1;
	}
	return ans;
}

int main(void) {
	int num, i, ans;
	cin >> num;
	ans = Bitsize(num);
	if (1 << (ans - 1) == num)
		ans--;
	cout << ans << "\n";
	return 0;
}