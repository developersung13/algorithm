#include <iostream>

using namespace std;

int N, total;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int k = 1; k <= N; k++) total += k;
	cout << total;
	return 0;
}