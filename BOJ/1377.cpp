#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, ans;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
    vector<pair<int, int>> v(N);
	for (int k = 0; k < N; k++) {
		cin >> v[k].first;
		v[k].second = k;
	} stable_sort(v.begin(), v.end());

	for (int k = 0; k < N; k++) ans = max(ans, v[k].second - k);
	cout << ans + 1;
	return 0;
}