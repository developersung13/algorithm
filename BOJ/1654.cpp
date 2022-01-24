#include <iostream>
using namespace std;

int k, n, ans, cnt;
int lanArr[10000];
long long low = 1, mid, high;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> lanArr[i];
		high = high < lanArr[i] ? lanArr[i] : high;
	}

	while (low <= high) {
		cnt = 0;
		mid = (high + low) / 2;
		for (int i = 0; i < k; i++) cnt += lanArr[i] / mid;
		if (cnt >= n) {
			low = mid + 1;
			ans = ans < mid ? mid : ans;
		} else high = mid - 1;
	} cout << ans;
	return 0;
}