#include <iostream>
#define N 9

using namespace std;

int num, index, maxNum;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int k = 1; k <= N; k++) {
		cin >> num;
		if (maxNum < num) { maxNum = num; index = k; }
	} cout << maxNum << '\n' << index;
	return 0;
}