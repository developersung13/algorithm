#include <iostream>
#include <string>
using namespace std;

int T, missPos;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> T;
    for (int k=0; k < T; k++) {
        cin >> missPos >> str;
        str.erase(missPos-1, 1);
        cout << str + "\n";
    } return 0;
}