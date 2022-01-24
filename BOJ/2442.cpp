#include <iostream>
using namespace std;

int n;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	for(int k=1; k <= n; k++) {
		for(int z=0; z < n-k; z++) cout << ' ';
		for(int z=0; z < 2*k-1; z++) cout << '*';
		cout << '\n';
	} return 0;
}