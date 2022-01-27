#include <iostream>
#define MAX 100001
using namespace std;

int N, M, i, j;
int arr[MAX];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int k = 1; k <= N; k++) {
		cin >> arr[k];
		arr[k] += arr[k - 1];
	}

	cin >> M;
	for (int k = 1; k <= M; k++) {
		cin >> i >> j;
		cout << arr[j] - arr[i - 1] << '\n';
	} return 0;
}