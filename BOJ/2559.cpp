#include <iostream>
#define MAX 100001
using namespace std;

int N, K, maxNum, sum;
int arr[MAX], dp[MAX - 1];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;
	for (int k = 1; k <= N; k++) cin >> arr[k];
	for (int k = 1; k <= K; k++) sum += arr[k];
	dp[1] = sum - arr[1]; maxNum = sum;
	for (int k = 1; k <= N - K; k++) {
		sum = 0;
		sum = dp[k] + arr[k + K];
		dp[k + 1] = sum - arr[k + 1];
		maxNum = maxNum < sum ? sum : maxNum;
	} cout << maxNum;
	return 0;
}