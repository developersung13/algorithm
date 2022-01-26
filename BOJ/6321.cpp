#include <iostream>
#include <string>
using namespace std;

int n;
string str, ansStr;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for (int k=1; k <= n; k++) {
        cin >> str;
        ansStr.clear();
        for (int z=0; z < str.length(); z++) {
            if (str[z] == 'z' || str[z] == 'Z')
                ansStr += str[z] - 25;
            else ansStr += str[z] + 1;
        } cout << "String #" << k << '\n' << ansStr + "\n\n";
    } return 0;
}