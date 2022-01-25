#include <iostream>

using namespace std;

int N;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int k = N; k >= 1; k--) cout << k << '\n';
	return 0;
}