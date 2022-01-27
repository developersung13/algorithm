#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int ans = 1;
string str;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> str;
	for (int k = 0; k < str.length(); k++) if (str[k] == ',') ans++;
	cout << ans;
	return 0;
}