#include <iostream>
#include <algorithm>
#include <string>
#define MAX 10001
using namespace std;

int num, dp[MAX];
string numStr;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for (int k=1; k <= MAX; k++) {
        num = k; numStr = to_string(k);
        for (int z=0; z < numStr.length(); z++) num += numStr[z]-'0';
        dp[k] = num;
    } stable_sort(dp, dp+MAX);
    
    for (int k=1; k <= MAX; k++) {
        if(binary_search(dp, dp+MAX, k)) continue;
        cout << k << '\n';
    }
}