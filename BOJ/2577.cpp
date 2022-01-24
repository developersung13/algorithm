#include <iostream>

using namespace std;

int A, B, C, multiplyNum;
int digit[10];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> A >> B >> C;
	multiplyNum = A * B * C;

	while (multiplyNum != 0) {
		digit[multiplyNum % 10]++;
		multiplyNum /= 10;
	}

	for (int k = 0; k < sizeof(digit) / sizeof(digit[0]); k++)
		cout << digit[k] << '\n';
	return 0;
}