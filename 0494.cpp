#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int i = 0;
	string s, y = "yukicoder";
	cin >> s;
	while (s[i] != '?')
		i++;
	cout << y[i] << "\n";
	return 0;
}