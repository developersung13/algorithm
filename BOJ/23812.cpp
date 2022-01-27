#include <iostream>
#include <string>
using namespace std;

int n;
string str = "@   @n@@@@@n@   @n@@@@@n@   @n", oneLine;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> n;
    for (int k=0; k < sizeof(str)/sizeof(str[0]); k++) {
        for (int z=0; z < n; z++) {
            if (str[k] == 'n') break;
            oneLine += str[k];
        } if (str[k] == 'n') {
            for (int z=0; z < n; z++)
                cout << oneLine + '\n';
            oneLine = "";
        }
    } return 0;
}