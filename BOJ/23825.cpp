#include <iostream>
using namespace std;

long long N, M;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N >> M;
    if (N < M) cout << N / 2;
    else cout << M / 2;
    return 0;
}