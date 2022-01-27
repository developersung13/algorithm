#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n, len;
string nickName;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n; cin.ignore();
    for (int k=0; k < n; k++) {
        getline(cin, nickName);
        len = nickName.length();
        for (int z=0; z < len; z++) {
            nickName.erase(0, 1);
            if (nickName[0] == ' ') break;
        } 
        
        for (int z=0; z < nickName.length(); z++)
            if (nickName[z] == ' ') { nickName.erase(z, 1); z--; }
        
        reverse(nickName.begin(), nickName.end());
        nickName += "dog";
        reverse(nickName.begin(), nickName.end());
        cout << nickName + '\n';
    } return 0;
}