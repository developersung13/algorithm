#include <iostream>
#define MAX 5
using namespace std;

int a, b, cnt;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a;
    for (int k=0; k < MAX; k++) {
        cin >> b;
        if (b == a) cnt++;
    } cout << cnt;
    return 0;
}