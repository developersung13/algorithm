#include <iostream>
using namespace std;

int T, A, B, C;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> T;
    if (T % 10 != 0) cout << -1;
    else {
        A = T / 300;
        B = (T % 300) / 60;
        C = ((T % 300) % 60) / 10;
        cout << A << ' ' << B << ' ' << C;
    } return 0;
}