#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int num, i = 0, j, k;
	cin >> num;
	string s;
	vector<int> ans(10, 0), qs(5, 16);
	for (; i < num; i++) {
		scanf_s("%d%d%d%d", &qs[0], &qs[1], &qs[2], &qs[3]);
		cin >> s;
		sort(qs.begin(), qs.end());
		if (s == "YES") {
			for (j = 0, k = 0; j < 10; j++) {
				if (j == qs[k]) {
					k++;
					if (ans[j] == 2)
						continue;
					ans[j] = 1;
				}
				else
					ans[j] = 2;
			}
		}
		else {
			for (j = 0, k = 0; j < 10; j++) {
				if (j == qs[k]) {
					k++;
					if (ans[j] == 2)
						continue;
					ans[j] = 2;
				}
			}
		}
	}
	for (i = 0, k = 10; i < 10; i++) {
		if (ans[i] == 1)
			k = i;
		else if (ans[i] == 0)
			j = i;
	}
	if (k == 10)
		cout << j << "\n";
	else
		cout << k << "\n";
	return 0;
}