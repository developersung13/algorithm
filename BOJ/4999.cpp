#include <iostream>
#include <string>
using namespace std;

string patStr, docStr;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> patStr >> docStr;
    patStr.erase(patStr.length()-1);
    docStr.erase(docStr.length()-1);
    if (patStr.length() >= docStr.length()) cout << "go";
    else cout << "no";
    return 0;
}