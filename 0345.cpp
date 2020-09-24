#include <iostream>
#include <string>
#include <algorithm>
#define INF 1000

using namespace std;

int main(void) {
	int i, j, l = INF, n;
	string s;
	cin >> s;
	n = s.size();
	for (i = 0; i < n; i++) {
		while (s[i] != 'c' && i < n)
			i++;
		if (i == n)
			break;
		j = i;
		while (s[j] != 'w' && j < n)
			j++;
		if (j == n)
			break;
		j++;
		while (s[j] != 'w' && j < n)
			j++;
		if (j == n)
			break;
		l = min(l, j - i + 1);
	}
	if (l == INF)
		l = -1;
	cout << l << "\n";
	return 0;
}