#include <iostream>
using namespace std;

int a, b, c, d, e;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c >> d >> e;
    if (a < 40) a = 40;
    if (b < 40) b = 40;
    if (c < 40) c = 40;
    if (d < 40) d = 40;
    if (e < 40) e = 40;
    cout << (a + b + c + d + e) / 5;
    return 0;
}