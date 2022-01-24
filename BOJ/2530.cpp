#include <iostream>
using namespace std;

int h, m, s, d;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> h >> m >> s >> d;
    for(int k = 1; k <= d; k++) {
        s++; if (s == 60) { m++; s = 0; }
        if (m == 60) { h++; m = 0; }
        if (h == 24) h = 0;
    } cout << h << ' ' << m << ' ' << s;
    return 0;
}