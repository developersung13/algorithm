#include <iostream>
#include <algorithm>
#define MAX 4
using namespace std;

int sbj[MAX], sbj2[MAX-2];

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for (int k=0; k < MAX; k++) cin >> sbj[k];
    for (int k=0; k < MAX-2; k++) cin >> sbj2[k];
    
    stable_sort(sbj, sbj+MAX);
    stable_sort(sbj2, sbj2+MAX-2);
    
    cout << sbj[MAX-1] + sbj[MAX-2] + sbj[MAX-3] + sbj2[MAX-3];
    return 0;
}