#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

bool isSecond;
int n, num, mok, idx, maxNum, mode;
vector<int> numVec;
vector<int> numVec2(8001);

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for (int k=0; k < n; k++) {
        cin >> num;
        numVec.push_back(num);
        mok += num;
        idx = (num <= 0) ? abs(num) : num + 4000;
        numVec2[idx]++;
        maxNum = (numVec2[idx] > maxNum) ? numVec2[idx] : maxNum;
    } stable_sort(numVec.begin(), numVec.end());;
    
    for (int k= -4000; k <= 4000; k++) {
        idx = (k <= 0) ? abs(k) : k + 4000;
        if(numVec2[idx] == maxNum) {
            mode = k;
            if(isSecond) break;
            isSecond = true;
        }
    }
    
    cout << round(1.0 * mok / n)<< '\n';
    cout << numVec[n/2] << '\n';
    cout << mode << '\n';
    cout << numVec[numVec.size()-1] - numVec[0];
    return 0;
}