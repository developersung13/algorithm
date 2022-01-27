#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, option;
string str[100];


int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for (int k=0; k < n; k++) cin >> str[k];
    cin >> option;
    
    if (option == 1) {
        for (int k=0; k < n; k++) cout << str[k] << '\n';
    } else if (option == 2) {
        for (int k=0; k < n; k++)
            reverse(str[k].begin(), str[k].end());
        for (int k=0; k < n; k++) cout << str[k] << '\n';
    } else {
        for (int k=n-1; k >= 0; k--) cout << str[k] << '\n';        
    } return 0;
}