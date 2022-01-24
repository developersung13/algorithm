#include <iostream>
#include <string>
using namespace std;

int n, rNum;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for (int k=0; k < n; k++) {
        cin >> rNum >> str;
        for (int z=0; z < str.length(); z++)
            for (int i=0; i < rNum; i++) 
                cout << str[z];
        cout << '\n';
    } return 0;
}