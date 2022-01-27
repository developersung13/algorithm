#include <iostream>
#include <algorithm>
using namespace std;

int N, W, H, L;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   
    cin >> N >> W >> H >> L;
    cout << min((W / L) * (H / L), N);
    return 0;
}