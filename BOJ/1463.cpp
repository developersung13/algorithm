#include <iostream>
#include <algorithm>

using namespace std;

int n, cnt;
int DP[1000001];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	DP[1] = 0;

	for (int k = 2; k <= n; k++) {
		DP[k] = DP[k - 1] + 1;
		if (k % 2 == 0) DP[k] = min(DP[k], DP[k / 2] + 1);
		if (k % 3 == 0) DP[k] = min(DP[k], DP[k / 3] + 1);
	} cout << DP[n];
	return 0;
}