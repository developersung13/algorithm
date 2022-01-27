#include <iostream>
#include <algorithm>
#define MAX 300001
using namespace std;

int N, Q, L, R, num;
int arr[MAX], dp[MAX];

int main(int argc, const char* argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> Q;
	for (int k = 1; k <= N; k++) cin >> arr[k];
	stable_sort(arr + 1, arr + N + 1);
	for (int k = 1; k <= N; k++) dp[k] = dp[k - 1] + arr[k];

	for (int k = 1; k <= Q; k++) {
		cin >> L >> R;
		cout << dp[R] - dp[L - 1] << '\n';
	} return 0;
}