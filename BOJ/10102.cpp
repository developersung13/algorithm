#include <iostream>
using namespace std;

int V, A, B;
char ch;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> V;
    for (int k=0; k < V; k++) {
        cin >> ch;
        if (ch == 'A') A++;
        else B++;
    } if (A == B) cout << "Tie";
    else if (A > B) cout << 'A';
    else cout << 'B';
    return 0;
}