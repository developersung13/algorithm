#include <iostream>
using namespace std;

int L, P, a, b, c, d, e, tmp;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> L >> P >> a >> b >> c >> d >> e; tmp = L * P;
    cout << a-tmp << ' ' << b - tmp << ' ' << c - tmp << ' ' << d - tmp << ' ' << e - tmp;
    return 0;
}