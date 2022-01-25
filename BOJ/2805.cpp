#include <iostream>
#include <vector>
#define MAX 1000000
using namespace std;

int N;
long long low=1, high, mid, M, len, ans;
long long tree[MAX];

bool check(long long h) {
    len = 0;
    for (int k=0; k < N; k++)
        if (tree[k] - h > 0) len += tree[k] - h;
    
    if (len >= M) return true;
    return false;
}

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N >> M;
    for (int k=0; k < N; k++) {
        cin >> tree[k];
        high = high < tree[k] ? tree[k] : high;
    }
    
    while (low <= high) {
        mid = (high + low) / 2;
        if (check(mid)) {
            ans = ans < mid ? mid : ans;
            low = mid + 1;
        } else high = mid - 1;
    } cout << ans;
    return 0;
}