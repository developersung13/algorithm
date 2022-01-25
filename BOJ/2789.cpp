#include <iostream>
#include <string>
using namespace std;

string str, str2 = "CAMBRIDGE";

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> str;
    for (int k=0; k < str.length(); k++)
        for (int z=0; z < str2.length(); z++)
            if (str[k] == str2[z]) { str.erase(k, 1); k--; }
    cout << str;
    return 0;
}