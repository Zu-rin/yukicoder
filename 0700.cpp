#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int num, len, i = 0, ans;
	cin >> num >> len;
	string str;
	for (; i < num; i++) {
		cin >> str;
		ans = str.find("LOVE");
		if (ans != -1) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}