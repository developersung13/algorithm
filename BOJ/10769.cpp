#include <iostream>
#include <string>
using namespace std;

int idx[2], hCnt, sCnt;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    getline(cin, str);
    
    do {
        if ((idx[0] = str.find(":-)")) != string::npos) {
            str.erase(idx[0], 3);
            hCnt++;
        }
        
        if ((idx[1] = str.find(":-(")) != string::npos) {
            str.erase(idx[1], 3);
            sCnt++;
        }
    } while(idx[0] != -1 || idx[1] != -1);
    if (!(hCnt + sCnt)) cout << "none";
    else if (hCnt > sCnt) cout << "happy";
    else if (hCnt < sCnt) cout << "sad";
    else cout << "unsure";
    return 0;
}