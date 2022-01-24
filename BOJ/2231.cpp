#include <iostream>
#include <vector>
using namespace std;

int n, num, cnt, tmp;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    while (cnt < n) {
        tmp = num = ++cnt;
        while(tmp) {
            num += tmp % 10;
            tmp /= 10;
        } if (n == num) {
            cout << cnt;
            return 0;
        }
    } cout << 0;
    return 0;
}