#include <iostream>
using namespace std;

int K, N, M;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> K >> N >> M;
    if (K * N > M) cout << K * N - M;
    else cout << 0;
    return 0;
}