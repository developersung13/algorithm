#include <iostream>
using namespace std;

int a, b, n;

int gcd(int a, int b) {
    while(b != 0) {
        n = a % b;
        a = b;
        b = n;
    } return a;
}

int lcd(int a, int b) { return a * b / gcd(a, b); }

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b;
    cout << gcd(a, b) << '\n' << lcd(a, b);
    return 0;
}