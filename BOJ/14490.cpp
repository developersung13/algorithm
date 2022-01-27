#include <iostream>
#include <string>
using namespace std;

int a, b, tf, ans;
string formula, aStr, bStr;

int gcd(int n, int m) {
    if (n % m == 0) return m;
    return gcd(m, n % m);
}

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> formula;
    for (int k=0; k < formula.length(); k++) {
        if (formula[k] == ':') { tf = 1; continue; }
        if (tf) bStr += formula[k];
        else aStr += formula[k];
    }
    
    a = stoi(aStr);
    b = stoi(bStr);
    
    ans = gcd(a, b);
    cout << a / ans << ':' << b / ans;
    return 0;
}