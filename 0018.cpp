#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int i = 0, buf;
	string str;
	cin >> str;
	for (; i < str.size(); i++) {
		buf = str[i];
		buf -= 'A' + i + 1;
		while (buf < 0)
			buf += 26;
		str[i] = buf + 'A';
	}
	cout << str << "\n";
	return 0;
}