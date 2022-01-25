#include <iostream>
using namespace std;

int a, b, c, d, e, f;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c >> d >> e >> f;
    cout << 1-a << ' ' << 1-b << ' ' << 2-c << ' ' << 2-d << ' ' << 2-e << ' ' << 8-f;
    return 0;
}