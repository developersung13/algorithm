#include <iostream>
#include <string>
using namespace std;

int alphabet[26];
string str;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> str;
	for (int k = 0; k < str.size(); k++) alphabet[str[k] - 'a']++;
	for (int k = 0; k < 26; k++) cout << alphabet[k] << ' ';
	return 0;
}