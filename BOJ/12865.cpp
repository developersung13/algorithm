#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int d[100001], w[101], v[101];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;

	for (int k = 1; k <= N; k++) cin >> w[k] >> v[k];

	for (int k = 1; k <= N; k++)
		for (int z = K; z >= 1; z--)
			if (w[k] <= z)
				d[z] = max(d[z], d[z - w[k]] + v[k]);

	cout << d[K];
	return 0;
}