#include <iostream>
#define MAX 26
using namespace std;

int n, total;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for (int k=0; k < n; k++) {
        cin >> str;
        total = 0;
        int alphabet[MAX] = {};
        for (int a=0; a < str.length(); a++)
            alphabet[str[a]-'A']++;
        for (int a=0; a < MAX; a++)
            if (!alphabet[a]) total += 'A' + a;
        cout << total << '\n';
    } return 0;
}