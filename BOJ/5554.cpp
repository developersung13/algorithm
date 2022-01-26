#include <iostream>
using namespace std;

int a, b, c, d, tot;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c >> d;
    tot = a + b + c + d;
    cout << tot / 60 << '\n';
    cout << tot % 60;
    return 0;
}