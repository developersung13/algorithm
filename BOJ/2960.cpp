#include <iostream>
using namespace std;

int N, K, cnt;
int pNum[1001];

int main(int argc, const char*argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N >> K;
    for (int k=2; k <= N; k++) pNum[k] = k;
    for (int k=2; k <= N; k++)
        for (int z=k; z <= N; z+=k)
            if (pNum[z] != 0) {
                pNum[z] = 0;
                if (K == ++cnt) {
                    cout << z;
                    return 0;
                }
            }
}