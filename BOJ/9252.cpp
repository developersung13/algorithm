#include <iostream>
#include <algorithm>
#include <string>
#define MAX 1001
using namespace std;

int k, z;
int dp[MAX][MAX];
string a, b, ans;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b;
    a = ' ' + a; b = ' ' + b;
    
    for (k=1; k < a.length(); k++)
        for (z=1; z < b.length(); z++) {
            if (a[k] == b[z]) {
                dp[k][z] = dp[k-1][z-1] + 1;
            } else dp[k][z] = max(dp[k-1][z], dp[k][z-1]);
        }
    
    k = a.length()-1; z = b.length()-1;
    while(k != 0 && z != 0) {
        if (dp[k][z] == dp[k-1][z]) k--;
        else if (dp[k][z] == dp[k][z-1]) z--;
        else { ans.push_back(a[k]); k--; z--; }
    } 
    
    cout << dp[a.length()-1][b.length()-1] << '\n';
    for (k = ans.length()-1; k >= 0; k--) cout << ans[k];
    return 0;
}