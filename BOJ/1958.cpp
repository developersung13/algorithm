#include <iostream>
#include <algorithm>
#include <string>
#define MAX 101
using namespace std;

int dp[MAX][MAX][MAX];
string a, b, c;

int max(int a, int b, int c) {
    return max(max(a, b), c);
}

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c;
    a = ' ' + a; b = ' ' + b; c = ' ' + c;
    
    for (int k=1; k < a.length(); k++)
        for (int z=1; z < b.length(); z++)
            for (int g=1; g < c.length(); g++) {
                if (a[k] == b[z] && b[z] == c[g])
                    dp[k][z][g] = dp[k-1][z-1][g-1] + 1;
                else
                    dp[k][z][g] = max(dp[k-1][z][g], dp[k][z-1][g], dp[k][z][g-1]);
            }
    cout << dp[a.length()-1][b.length()-1][c.length()-1];
    return 0;
}