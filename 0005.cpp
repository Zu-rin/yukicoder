#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int Box, num, i = 0;
	cin >> Box >> num;
	vector<int> wide(num);
	for (; i < num; i++)
		cin >> wide[i];
	sort(wide.begin(), wide.end());
	i = 0;
	while (Box >= wide[i]) {
		Box -= wide[i++];
		if (i == num)
			break;
	}
	cout << i << "\n";
	return 0;
}