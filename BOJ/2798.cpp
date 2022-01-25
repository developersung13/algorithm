#include <iostream>
using namespace std;

int n, m, result;
int cardArr[100];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int k = 0; k < n; k++) cin >> cardArr[k];

	for (int k = 0; k < n; k++)
		for (int z = k + 1; z < n; z++)
			for (int i = z + 1; i < n; i++)
				if (m >= cardArr[k] + cardArr[z] + cardArr[i] && result < cardArr[k] + cardArr[z] + cardArr[i])
					result = cardArr[k] + cardArr[z] + cardArr[i];

	cout << result;
	return 0;
}