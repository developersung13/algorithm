#include <iostream>
#include <string>
using namespace std;

int n;
string ab;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int k = 0; k < n; k++) {
		cin >> ab;
		cout << ab[0] - '0' + ab[2] - '0' << '\n';
	} return 0;
}