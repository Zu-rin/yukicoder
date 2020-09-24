#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define MOD 1000000007
#define INF 1 << 30

using namespace std;
typedef long long ll;

typedef struct Point_Coordinates {
	int x, y;
} point;

int Judge(point s, point e, vector<string> d) {
	int i, j, dx = e.x - s.x, dy = e.y - s.y;
	for (i = 0; i < d.size(); i++) {
		for (j = 0; j < d[0].size(); j++) {
			if (d[i][j] == '#') {
				if (i + dy < d.size() && j + dx < d[0].size() && d[i + dy][j + dx] == '#') {
					d[i][j] = '.';
					d[i + dy][j + dx] = '.';
				}
				else if (i - dy >= 0 && j - dx >= 0 && d[i - dy][j - dx] == '#') {
					d[i][j] = '.';
					d[i - dy][j - dx] = '.';
				}
				else
					return false;
			}
		}
	}
	return true;
}

int main(void) {
	int num, i, j, h, w;
	point s, e;
	cin >> h >> w;
	vector<string> d(h);
	for (i = 0; i < h; i++) {
		cin >> d[i];
	}
	for (i = 0; i < h; i++) {
		s.x = d[i].find('#');
		if (s.x >= 0 && s.x < w) {
			s.y = i;
			break;
		}
	}
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			if (i == s.y && j == s.x)
				continue;
			if (d[i][j] == '#' && Judge(s, { j, i }, d)) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}