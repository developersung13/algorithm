#include <iostream>
#define MAX 1025
using namespace std;

int N, M, x, x2, y, y2, num;
int arr[MAX][MAX];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	for (int k = 1; k <= N; k++)
		for (int z = 1; z <= N; z++) {
			cin >> arr[k][z];
			arr[k][z] = arr[k][z - 1] + arr[k - 1][z] - arr[k - 1][z - 1] + arr[k][z];
		}
	
	for (int k = 0; k < M; k++) {
		cin >> x >> y >> x2 >> y2;
		cout << arr[x2][y2] - arr[x - 1][y2] - arr[x2][y - 1] + arr[x - 1][y - 1] << '\n';
	} return 0;
}