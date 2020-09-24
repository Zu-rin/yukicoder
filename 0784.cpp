#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	cin >> s;
	int i = 1, num = s.size();
	cout << s[0];
	num--;
	for (int i = 1; i < s.size(); i++) {
		if (num % 3 == 0)
			cout << ',';
		cout << s[i];
		num--;
	}
	return 0;
}