#include <iostream>
#include <string>
using namespace std;

string str;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> str;

	for (int k = 1; k <= str.size(); k++) {
		cout << str[k-1];
		if (k % 10 == 0) cout << '\n';
	} return 0;
}