#include <iostream>
using namespace std;

int N, M, K, cnt;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N >> M >> K;
    for (int k=0; k < N; k++)
        for (int z=0; z < M; z++)    
            if (cnt++ == K) {
                cout << k << ' ' << z;
                return 0;
            }
}