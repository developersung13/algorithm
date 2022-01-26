#include <iostream>
using namespace std;

int n, k, n2, k2;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> k >> n2 >> k2;
    cout << n*k + n2 * k2;
    return 0;
}