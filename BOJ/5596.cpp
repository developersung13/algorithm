#include <iostream>
using namespace std;

int a, b, c, d, tot;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for (int k=0; k < 2; k++) {
        cin >> a >> b >> c >> d;
        tot = a+b+c+d > tot ? a+b+c+d : tot;
    } cout << tot;
    return 0;
}