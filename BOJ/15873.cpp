#include <iostream>
#include <string>
using namespace std;

string numStr, a, b;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> numStr;
    if (numStr.length() == 4) {
        a.push_back(numStr[0]); a.push_back(numStr[1]); b.push_back(numStr[2]); b.push_back(numStr[3]);
        cout << stoi(a) + stoi(b);
    } else if (numStr.length() == 3) {
        if (numStr[1] == '0') {
            a.push_back(numStr[0]); a.push_back(numStr[1]); b.push_back(numStr[2]);
            cout << stoi(a) + stoi(b);
        } else {
            a.push_back(numStr[0]); b.push_back(numStr[1]); b.push_back(numStr[2]);
            cout << stoi(a) + stoi(b)   ;
        }
    } else cout << numStr[0] - '0' + numStr[1] - '0';
    return 0;
}