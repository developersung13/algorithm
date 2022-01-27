#include <iostream>
#define MAX 7
using namespace std;

int n, m;
int arr[MAX];

void dfs(int idx) {
	if(idx == m) {
		for(int k=0; k < m; k++)
			cout << arr[k] << ' ';
		cout << '\n';
		return;
	}
	
	for(int k=1; k <= n; k++) {
		arr[idx] = k;
		dfs(idx + 1);
	}
}

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n >> m;
	dfs(0);
	return 0;
}