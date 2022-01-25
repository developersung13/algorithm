#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
string a, b;
vector<int> disV;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for (int k=0; k < n; k++) {
        cin >> a >> b;
        for (int z=0; z < a.length(); z++) {
            if (a[z] > b[z]) disV.push_back(26-a[z]+b[z]);
            else disV.push_back(b[z]-a[z]);
        } cout << "Distances: "; 
        for (int z=0; z < disV.size(); z++)
            cout << disV[z] << ' ';
        cout << '\n';
        disV.clear();
    } return 0;
}