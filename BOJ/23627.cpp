#include <iostream>
#include <string>
using namespace std;

int pos;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> str;
    if(str[str.length()-5] == 'd' &&
       str[str.length()-4] == 'r' &&
       str[str.length()-3] == 'i' &&
       str[str.length()-2] == 'i' &&
       str[str.length()-1] == 'p') cout << "cute";
    else cout << "not cute";
    return 0;
}