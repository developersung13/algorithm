#include <iostream>
using namespace std;

int a, b, c, d, e, x, y;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c >> d >> e;
    
    x = a * e; y = b;
    
    if (e > c) y += (e-c) * d;
    if (x > y) cout << y;
    else cout << x;
    return 0;
}