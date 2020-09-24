#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define MOD 1000000007
#define INF 1 << 30

using namespace std;
typedef long long ll;

int main(void) {
	int num, i, a;
	cin >> num;
	vector<int> d(num);
	a = num;
	for (i = 0; i < num; i++)
		cin >> d[i];
	for (i = num - 1 ; i >= 0; i--) {
		if (d[i] == a)
			a--;
	}
	cout << a << "\n";
	return 0;
}