#include <iostream>

using namespace std;

int N;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int k = 1; k <= N; k++) {
		for(int z=0; z < k; z++) cout << '*';
		cout << '\n';
	} return 0;
}