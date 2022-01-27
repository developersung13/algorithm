#include <iostream>
using namespace std;

int num, ans;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> num; ans = 56 * num;
    cin >> num; ans += 24 * num;
    cin >> num; ans += 14 * num;
    cin >> num; ans += 6 * num;
    cout << ans;
    return 0;
}