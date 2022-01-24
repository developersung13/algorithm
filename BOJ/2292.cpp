#include <iostream>
using namespace std;

int num, sum, k;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> num;
    for (int sum=2; sum <= num; k++)
        sum += 6 * k;
    if (num == 1) k++;
    cout << k;
    return 0;
}