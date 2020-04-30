#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <cmath>
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
	int i, k = 1;
	ll num, a, buf;
	cin >> num;
	buf = num;
	for (i = 2; i <= sqrt(num); i++) {
		while (num % i == 0) {
			num /= i;
			k++;
			a = i;
		}
	}
	if (k <= 2 || a * a == buf)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
