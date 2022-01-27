#include <iostream>
#include <string>
using namespace std;

string str = "";
int alphabet[26];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> str;
	fill_n(alphabet, 26, -1);

	for (int k = 0; k < str.length(); k++) alphabet[str[k] - 'a'] = str.find(str[k]);
	for (int k = 0; k < 26; k++) cout << alphabet[k] << ' ';
	return 0;
}