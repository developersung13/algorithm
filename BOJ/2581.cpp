#include <iostream>
#include <cmath>
using namespace std;

int M, N, total, minPrimeNum;
int primeNum[10000];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> M >> N;
	primeNum[0] = primeNum[1] = true;

	for (int k = 2; k <= sqrt(N); k++)
		if (primeNum[k] == false)
			for (int z = k * 2; z <= N; z += k)
				primeNum[z] = true;

	for (int k = M; k <= N; k++)
		if (!primeNum[k]) {
			if (!total) minPrimeNum = k;
			total += k;
		}


	if (!total) cout << -1;
	else cout << total << '\n' << minPrimeNum;

	return 0;
}