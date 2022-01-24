#include <iostream>
using namespace std;

int m, n;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> m >> n;
    cout << m * n - 1;
    return 0;
}