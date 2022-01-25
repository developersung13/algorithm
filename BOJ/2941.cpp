#include <iostream>
#include <string>
using namespace std;

int cnt, cur, pos;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> str;
    for (int k=0; k < str.length(); k++) {
        if ((cur = str.find("c=", pos)) != string::npos) {
            pos += cur;
            str.erase(cur, 1);
            str[cur] = '?';
            cnt++;
        } else if ((cur = str.find("c-", pos)) != string::npos) {
            pos += cur;
            str.erase(cur, 1);
            str[cur] = '?';
            cnt++;
        } else if ((cur = str.find("dz=", pos)) != string::npos) {
            pos += cur;
            str.erase(cur, 2);
            str[cur] = '?';
            cnt++;
        } else if ((cur = str.find("d-", pos)) != string::npos) {
            pos += cur;
            str.erase(cur, 1);
            str[cur] = '?';
            cnt++;
        } else if ((cur = str.find("lj", pos)) != string::npos) {
            pos += cur;
            str.erase(cur, 1);
            str[cur] = '?';
            cnt++;
        } else if ((cur = str.find("nj", pos)) != string::npos) {
            pos += cur;
            str.erase(cur, 1);
            str[cur] = '?';
            cnt++;
        } else if ((cur = str.find("s=", pos)) != string::npos) {
            pos += cur;
            str.erase(cur, 1);
            str[cur] = '?';
            cnt++;
        } else if ((cur = str.find("z=", pos)) != string::npos) {
            pos += cur;
            str.erase(cur, 1);
            str[cur] = '?';
            cnt++;
        } pos = 0; cnt++;
    } cout << str.length(); 
    return 0;
}