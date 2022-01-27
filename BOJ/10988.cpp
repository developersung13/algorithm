#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string s1, s2;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> s1;
    for (int k=s1.length()-1; k >= 0; k--) s2 += s1[k];
    if (s1 == s2) cout << 1;
    else cout << 0;
    return 0;
}