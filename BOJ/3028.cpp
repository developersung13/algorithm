#include <iostream>
#include <string>
using namespace std;

int ans = 1;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> str;
    for (int k=0; k < str.length(); k++) {
        if (str[k] == 'A') {
            if (ans == 1) ans = 2;
            else if (ans == 2) ans = 1;
        } else if (str[k] == 'B') {
            if (ans == 2) ans = 3;
            else if (ans == 3) ans = 2;
        } else {
            if (ans == 1) ans = 3;
            else if (ans == 3) ans = 1;
        }
    } cout << ans;
    return 0;
}