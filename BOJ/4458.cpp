#include <iostream>
#include <string>
using namespace std;

int n;
string str;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n; cin.ignore();
	for (int k = 0; k < n; k++) {
		getline(cin, str);
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 'a' + 'A';
		cout << str + '\n';
	} return 0;
}