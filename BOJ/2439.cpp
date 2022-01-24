#include <iostream>

using namespace std;

int N;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int k = 1; k <= N; k++) {
		for (int z = 1; z <= N-k; z++) cout << ' ';
		for (int g = 1; g <= k; g++) cout << '*';
		cout << '\n';
	} return 0;
}