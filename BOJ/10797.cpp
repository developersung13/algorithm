#include <iostream>
#define MAX 5
using namespace std;

int dNum, cNum, cnt;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> dNum;
    for (int k=0; k < MAX; k++) {
        cin >> cNum;
        if (cNum == dNum) cnt++;
    } cout << cnt;
    return 0;
}