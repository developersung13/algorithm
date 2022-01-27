#include <iostream>

using namespace std;

int A, B;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (1) {
		cin >> A >> B;
		if (A == 0 && B == 0) break;
		cout << A + B << '\n';
	} return 0;
}