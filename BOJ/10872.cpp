#include <iostream>
using namespace std;

int n, ans;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n; 
	if(!n) cout << 1;
	else {
		ans = n;
		for(int k=n-1; k >= 1; k--) ans *= k;
		cout << ans;
	} return 0;
}