#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int i = 0, val = 1, pair = 0, buf = 0;
	vector<int> num(5);
	for (; i < 5; i++)
		scanf_s("%d", &num[i]);
	sort(num.begin(), num.end());
	for (i = 0; i < 4; i++) {
		if (num[i] != num[i + 1]) {
			val++;
			buf = 0;
		}
		else {
			buf++;
			pair = max(pair, buf);
		}
	}
	switch (val) {
	case 4:
		printf("ONE PAIR\n");
		break;
	case 3:
		if (pair == 2)
			printf("THREE CARD\n");
		else
			printf("TWO PAIR\n");
		break;
	case 2:
		if (pair == 3)
			printf("NO HAND\n");
		else
			printf("FULL HOUSE\n");
		break;
	default:
		printf("NO HAND\n");
		break;
	}
	return 0;
}