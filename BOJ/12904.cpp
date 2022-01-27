#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int ans;
string s1, s2;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> s1 >> s2;
    while(s1.length() != s2.length()) {
        if (s2.back() == 'A') s2.pop_back();
        else {
            s2.pop_back();
            reverse(s2.begin(), s2.end());
        }
    } if (s1 == s2) cout << 1;
    else cout << 0;
    return 0;
}