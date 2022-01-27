#include <iostream>
using namespace std;

int N;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N; cout << N * (N-1);
    return 0;
}