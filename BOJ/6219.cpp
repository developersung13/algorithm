#include <iostream>
#include <cmath>
#include <string>
#define MAX 4000000
using namespace std;

int a, b, cnt;
int primeNum[MAX+1];
string numStr, d;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b >> d;

	for (int k = 2; k <= sqrt(b); k++)
		if (!primeNum[k])
			for (int z = k * 2; z <= b; z += k)
				primeNum[z] = true;

	for (int k = a; k <= b; k++) {
		if (!primeNum[k]) {
			numStr = to_string(k);
			if (numStr.find(d) != string::npos) cnt++;
		}
	} cout << cnt;
}