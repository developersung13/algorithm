#include <iostream>
using namespace std;

int h, m, c;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> h >> m >> c;
    for(int k = 1; k <= c; k++) {
        m++; if (m == 60) { h++; m = 0; }
        if (h == 24) h = 0;
    } cout << h << ' ' << m;
    return 0;
}