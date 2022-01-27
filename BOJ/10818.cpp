#include <iostream>
#include <algorithm>

using namespace std;

int N, num, minNum = 1000001, maxNum = -1000001;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int k = 0; k < N; k++) {
		cin >> num;
		minNum = min(minNum, num);
		maxNum = max(maxNum, num);
	} cout << minNum << ' ' << maxNum;
	return 0;
}