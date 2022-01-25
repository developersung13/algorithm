#include <iostream>
using namespace std;

int a, b, c, d, e;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c >> d >> e;
    cout << (a*a + b*b + c*c + d*d + e*e) % 10;
    return 0;
}