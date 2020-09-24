#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int vege, meet, high, lim, ans;
	cin >> vege >> meet >> high >> lim;
	ans = min(vege, lim / (high + 1));
	if (ans * high > meet)
		cout << meet / high << "\n";
	else
		cout << ans << "\n";
	return 0;
}