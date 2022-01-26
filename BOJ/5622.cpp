#include <iostream>
#include <string>
using namespace std;

int cnt;
string charS, strArr[] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" } ;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> charS;
    
    for (int k=0; k < charS.length(); k++) {
        cnt += 3;
        for (int z=0; z < 8; z++) {
            if(strArr[z].find(charS[k])  != string::npos) break;
            cnt++;
        }
    } cout << cnt;
    return 0;
}