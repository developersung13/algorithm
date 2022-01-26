#include <iostream>
using namespace std;

int n, t;
int dp[12];

int main(int argc, const char argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> t;
	dp[1] = 1, dp[2] = 2, dp[3] = 4;
	
	
	for(int k=4; k <= 11; k++)
		dp[k] = dp[k-1] + dp[k - 2] + dp[k - 3];
		
	for(int k=0; k < t; k++) {
		cin >> n;
		cout << dp[n] << '\n';
	} return 0;
}