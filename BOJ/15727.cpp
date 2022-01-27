#include <iostream>
using namespace std;

int d, ans;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> d; ans += d / 5; 
    if (d % 5 != 0) ans++;
    cout << ans;
    return 0;
}