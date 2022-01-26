#include <iostream>
using namespace std;

int L, A, B, C, D;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> L >> A >> B >> C >> D;
    while(A > 0 || B > 0) {
        A -= C; B -= D;
        L--;
    } cout << L;
    return 0;
}