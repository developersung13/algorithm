#include <iostream>

using namespace std;

int y;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> y;

	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) cout << '1';
	else cout << '0';
	return 0;
}