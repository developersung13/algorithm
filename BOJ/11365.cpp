#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(1) {
        getline(cin, str);
        if (str == "END") break;
        reverse(str.begin(), str.end());
        cout << str + '\n';
    } return 0;
}