#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string x, y;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> x >> y;
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	x = to_string(stoi(x) + stoi(y));
	reverse(x.begin(), x.end());
	cout << stoi(x);
	return 0;
}