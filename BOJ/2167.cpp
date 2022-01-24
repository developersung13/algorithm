#include <iostream>
#define MAX 301
using namespace std;

int N, M, K, i, j, x, y, total;
int arr[MAX][MAX];

int main(int arvc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	for (int k = 1; k <= N; k++)
		for (int z = 1; z <= M; z++)
			cin >> arr[k][z];

	cin >> K;
	for (int k = 1; k <= K; k++) {
		total = 0;
		cin >> i >> j >> x >> y;
		for (int z = i; z <= x; z++)
			for (int g = j; g <= y; g++)
				total += arr[z][g];
		cout << total << '\n';
	} return 0;
}