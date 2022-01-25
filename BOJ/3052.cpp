#include <iostream>

using namespace std;

int num, remainNum[42], diffCnt;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int k = 0; k < 10; k++) {
		cin >> num;
		if (!remainNum[num % 42]++) diffCnt++;
	} cout << diffCnt;
	return 0;
}