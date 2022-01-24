#include <iostream>
#include <cmath>
using namespace std;

#define MAX 1000

int T, *numArr, c[MAX+1], cnt;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> T;
	numArr = new int[T];
	c[0] = c[1] = true;

	for (int k = 0; k < T; k++) cin >> numArr[k];

	for (int k = 2; k <= sqrt(MAX); k++) {
		if (c[k] == false) {
			for (int z = k * 2; z <= MAX; z += k) {
				c[z] = true;
			}
		}
	}

	for (int k = 2; k <= MAX; k++)
		if (!c[k])
			for (int z = 0; z < T; z++)
				if (k == numArr[z]) cnt++;
	cout << cnt;
	return 0;
}