#include <iostream>

using namespace std;

int t, A, B;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	for (int k = 1; k <= t; k++) {
		cin >> A >> B;
		cout << "Case #" << k << ": " << A + B << '\n';
	} return 0;
}