#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c;
    if (a == b && b == c) cout << 10000 + a * 1000;
    else if (a == b) cout << 1000 + a * 100;
    else if (b == c) cout << 1000 + b * 100;
    else if (c == a) cout << 1000 + c * 100;
    else cout << max(max(a, b), c) * 100;
    return 0;
}