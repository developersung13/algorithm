#include <iostream>
using namespace std;

int n;
double num;

int main(int argc, const char* argv[]) {
    cin.tie(0);
    
    cin >> n;
    for (int k=0; k < n; k++) {
        cin >> num;
        printf("$%.2f\n", num * 0.8);
    } return 0;   
}