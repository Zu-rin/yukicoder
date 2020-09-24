#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	cin >> s;
	cout << s;
	if (s[0] != '0')
		printf("0\n");
	else
		printf("\n");
	return 0;
}