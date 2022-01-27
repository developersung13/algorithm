#include <iostream>

using namespace std;

int T, A, B;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> T;

	for (int k = 1; k <= T; k++) {
		cin >> A >> B;
		cout << "Case #" << k << ": " << A << " + " << B << " = " << A + B << '\n';
	} return 0;
}