#include <iostream>
#define P 1500000 // Pisano Period : 피제수가 (10^n) (n > 2)일 경우 (10^{n-1} * 15) 주기를 갖는 성질
using namespace std;

long long n;
unsigned long long fibo[P] = { 0, 1 };

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	for (int k = 2; k < P; k++) {
		fibo[k] = fibo[k - 1] + fibo[k - 2];
		fibo[k] %= 1000000;
	} cout << fibo[n % P];
	return 0;
}