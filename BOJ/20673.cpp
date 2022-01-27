#include <iostream>
using namespace std;

int p, q;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> p >> q;
    if (p <= 50 && q <= 10) cout << "White";
    else if (q > 30) cout << "Red";
    else cout << "Yellow";
    return 0;
}