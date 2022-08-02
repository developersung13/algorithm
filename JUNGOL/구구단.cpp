#include <iostream>
using namespace std;

int s, e;

int main(int argc, const char* argv[]) {
    cin.tie(0);
    
    while (1) {
        cin >> s >> e;
        if (s >= 2 && s <= 9 && e >= 2 && e <= 9) break;
        cout << "INPUT ERROR!\n";
    }
    
    
    
    for (int k=1; k <=9; k++) {
        if (s > e) {
            for (int dan=s; dan >= e; dan--) {
                printf("%d * %d = %2d   ", dan, k, dan*k);
            } printf("\n");     
        } else {
            for (int dan=s; dan <= e; dan++) {
                printf("%d * %d = %2d   ", dan, k, dan*k);
            } printf("\n");
        }
    } return 0;
}   