#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1 << 20

using namespace std;

int main(void) {
	int num, i = 0, ans = INF, buf;
	cin >> num;
	vector<int>data(num);
	for (; i < num; i++)
		scanf_s("%d", &data[i]);
	sort(data.begin(), data.end());
	i = num - 1;
	while (i > 0) {
		buf = data[i--] - data[i];
		if (buf != 0)
			ans = min(ans, buf);
	}
	if (ans == INF)
		ans = 0;
	cout << ans << "\n";
	return 0;
}