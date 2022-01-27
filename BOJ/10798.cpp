#include <iostream>
#include <string>
#define MAX 5
using namespace std;

int maxCol;
string str[MAX];

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for (int k=0; k < MAX; k++) {
        cin >> str[k];
        maxCol = maxCol < str[k].length() ? str[k].length() : maxCol;
    }
    
    for (int k=0; k < MAX; k++)
        if (str[k].length() < maxCol)
            for (int z=str[k].length(); z < maxCol; z++)
                str[k].push_back('@');
    
    for (int c=0; c < maxCol; c++)
        for (int r=0; r < MAX; r++)
            if (str[r][c] != '@')
                cout << str[r][c];
    return 0;
}