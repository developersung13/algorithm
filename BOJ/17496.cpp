#include <iostream>
using namespace std;

int n, t, c, p, mok;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> t >> c >> p;
    mok = n / t; if (n % t == 0) mok--;
    cout << mok * c * p;
    return 0;
}