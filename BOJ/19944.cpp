#include <iostream>
using namespace std;

int n, m;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   
    cin >> n >> m;
    if (m <= 2) cout << "NEWBIE!";
    else if (m <= n) cout << "OLDBIE!";
    else cout << "TLE!";
    return 0;
}