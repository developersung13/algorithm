#include <iostream>
#include <cmath>
using namespace std;

int m, n, *c;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> m >> n;
	c = new int[n];
	c[0] = c[1] = true;

	for (int k = 2; k <= sqrt(n); k++) {
		if (c[k] == false) {
			for (int z = k * 2; z <= n; z += k) {
				c[z] = true;
			}
		}
	}

	for (int k = m; k <= n; k++)
		if (!c[k]) cout << k << '\n';
	return 0;
}