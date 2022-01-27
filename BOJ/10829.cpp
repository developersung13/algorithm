#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string binary;
long long num, mok, r;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> num;

	while (mok != 1) {
		mok = num / 2;
		r = num % 2;
		num /= 2;
		binary += to_string(r);
		if (mok == 1) binary += to_string(mok);
	} reverse(binary.begin(), binary.end());
	cout << binary;
	return 0;
}