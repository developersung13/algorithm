#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string str;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> str;

	if (str.find('A') != string::npos) {
		replace(str.begin(), str.end(), 'B', 'A');
		replace(str.begin(), str.end(), 'C', 'A');
		replace(str.begin(), str.end(), 'D', 'A');
		replace(str.begin(), str.end(), 'F', 'A');
	} else if (str.find('B') != string::npos) {
		replace(str.begin(), str.end(), 'C', 'B');
		replace(str.begin(), str.end(), 'D', 'B');
		replace(str.begin(), str.end(), 'F', 'B');
	} else if (str.find('C') != string::npos) {
		replace(str.begin(), str.end(), 'D', 'C');
		replace(str.begin(), str.end(), 'F', 'C');
	} else {
		for (int k = 0; k < str.size(); k++) str[k] = 'A';
	} cout << str;
	return 0;
}