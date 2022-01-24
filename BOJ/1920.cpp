#include <iostream>
#include <algorithm>
using namespace std;

int N, M, value;
int A[100000];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int k = 0; k < N; k++) cin >> A[k];
	stable_sort(A, A + N);
	cin >> M;
	for (int k = 0; k < M; k++) {
		cin >> value;
		if (binary_search(A, A + N, value)) cout << '1' << '\n';
		else cout << '0' << '\n';
	} return 0;
}