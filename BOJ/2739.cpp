#include <iostream>

using namespace std;

int N;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int k = 1; k <= 9; k++) 
		cout << N << " * " << k << " = " << N * k << '\n';
	return 0;
}