#include <iostream>
#include <string>
using namespace std;

int s; // 1=C++, 2=JAVA, 3=Error!
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    getline(cin, str);
    for (int k=0; k < str.length(); k++) {
        if (str[str.length()-1] == '_' || str[0] == '_') { s = 3; break; }
        if (str[k] == ' ')  { s = 3; break; }
        if (str[0] >= 'A' && str[0] <= 'Z')  { s = 3; break; }
        if (str[k] == '_' && str[k-1] == '_') { s = 3; break; }
        if (str[k] == '_') {
            if (s == 2) { s = 3; break; }
            s = 1;
        }
        if (str[k] >= 'A' && str[k] <= 'Z') {
            if (s == 1) { s = 3; break; }
            s = 2;
        }
    } if (s == 3) { cout << "Error!"; return 0; }
    
    if (s == 1) {
        for (int k=1; k < str.length(); k++) {
            if (str[k] == '_') {
                str.erase(k, 1);
                str[k] -= 32;
            }
        }
    } else {
        for (int k=1; k < str.length(); k++) {
            if (str[k] >= 'A' && str[k] <= 'Z') {
                str[k] += 32;
                str.insert(k, "_");
            }
        }
    } cout << str;
    return 0;
}