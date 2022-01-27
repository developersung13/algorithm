#include <iostream>
#include <cmath>
using namespace std;

int num, ans;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> num; ans = num + 1;
    cin >> num; ans *= num + 1;
    cin >> num; ans /= num + 1;
    cout << abs(--ans);
    return 0;
}