#include <iostream>

using namespace std;

int N, X, num;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> X;
	
	for (int k = 0; k < N; k++) {
		cin >> num;
		if (num < X) cout << num << ' ';
	} return 0;
}