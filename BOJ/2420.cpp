#include <iostream>
#include <cmath>
using namespace std;

long long N, M;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N >> M;
    cout << abs(N-M);
    return 0;
}