#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 20
using namespace std;

int n, idx;
string str, strArr[MAX], ans;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(1) {
        cin >> n; if (!n) break;
        idx = 0; ans = "";
        memset(strArr, NULL, sizeof(strArr));
        cin >> str;
        for (int k=0; k < str.length(); k++) {
            strArr[idx] += str[k];
            if ((k+1) % n == 0) idx++;
        }
        
        for (int k=0; k < idx; k++)
            if ((k+1) % 2 == 0) 
                reverse(strArr[k].begin(), strArr[k].end());
                
        for (int k=0; k < n; k++)
            for (int z=0; z < idx; z++)
                ans += strArr[z][k];
        cout << ans + '\n';
    } return 0;
}