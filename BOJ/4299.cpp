#include <iostream>
using namespace std;

int A, B, a, b;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> A >> B;
    a = (A + B) / 2;
    b = (A - B) / 2;
    if ((A+B) % 2 != 0 || (A-B) % 2 != 0 || a < 0 || b < 0) cout << -1;
    else if (a > b) cout << a << ' ' << b;
    else cout << b << ' ' << a;
    return 0;
}