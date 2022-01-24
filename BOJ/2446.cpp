#include <iostream>
using namespace std;

int n, N, tmpNum, tmpNum2 = 1;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    N = 2 * n - 1;
    for (int k=0; k < N; k++) {
        if (k < n) {
            for (int z=0; z < k; z++) cout << ' ';
            for (int g=0; g < N-k-tmpNum; g++) cout << '*';
            tmpNum++;
        } else {
            tmpNum2+=2;
            for (int z=0; z < N-k-1; z++) cout << ' ';
            for (int g=0; g < tmpNum2; g++) cout << '*';
        } cout << '\n';
    } return 0;
}