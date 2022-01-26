#include <iostream>
using namespace std;

struct build {
    int weight;
    int height;
    int rating;
} *b;

int n, weight, height, rating;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    b = new build[n];
    
    for (int k=0; k < n; k++) cin >> b[k].weight >> b[k].height;
    for (int k=0; k < n; k++) {
        rating = 1;
        for (int z=0; z < n; z++) {
            if (k == z) continue;
            else if (b[k].weight < b[z].weight && b[k].height < b[z].height) rating++;
        } b[k].rating = rating; 
    }
    
    for (int k=0; k < n; k++) cout << b[k].rating << ' ';
    return 0;
}