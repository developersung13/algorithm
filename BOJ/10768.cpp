#include <iostream>
using namespace std;

int m, d;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> m >> d;
    if (m > 2) cout << "After";
    else if (m == 2) {
        if (d > 18) cout << "After";
        else  if (d == 18) cout << "Special";
        else cout << "Before";
    } else cout << "Before";
    return 0;
}