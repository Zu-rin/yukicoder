#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int num, kumi, i = 0;
	cin >> num >> kumi;
	vector<int> data(num);
	for (; i < num; i++)
		cin >> data[i];
	sort(data.begin(), data.end());
	cout << data[num - 1] - data[0] << "\n";
	return 0;
}