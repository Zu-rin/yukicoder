#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int i, ans = 0;
	string s;
	cin >> s;
	for (i = 2; i < s.size(); i++) {
		if (s[i - 2] == 'm' && s[i - 1] == 'i') {
			while (s[i] == '-')
				i++;
			if (s[i] == 'n')
				ans++;
		}
	}
	cout << ans << "\n";
	return 0;
}