#include <iostream>
#include <algorithm>
#include <string>
#define MAX 1001
using namespace std;

int dp[MAX][MAX];
string a, b;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b;
    a = ' ' + a; b = ' ' + b;
    
    for (int k=1; k < a.length(); k++)
        for (int z=1; z < b.length(); z++) {
            if (a[k] == b[z])
                dp[k][z] = dp[k-1][z-1] + 1;
            else
                dp[k][z] = max(dp[k-1][z], dp[k][z-1]);
        }
    cout << dp[a.length()-1][b.length()-1];
    return 0;
}