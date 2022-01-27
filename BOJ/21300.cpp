#include <iostream>
#define MAX 6
using namespace std;

int num, ans;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for (int k=0; k < 6; k++) {
        cin >> num;
        ans += num * 5;
    } cout << ans;
    return 0;
}