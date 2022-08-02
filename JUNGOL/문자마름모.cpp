#include <iostream>
using namespace std;

int x, y, n, ch='A'-1;

int main(int argc, const char* argv[]) {
    cin.tie(0);
    
    cin >> n;
    x = 0;
    y = n-1 ;
    
    int arr[n*2][n*2];
    
    for (int k=0; k < n * 2; k++)
        for (int z=0; z < n * 2; z++)
            arr[k][z] = 0;
    
    for (int m = n - 1; m > 0; m--) {
        for (int k = 1; k <= m; k++) {
          if (++ch == 'Z'+1) ch = 'A';
          arr[x++][y--] = ch;
        }
        for (int k = 1; k <= m; k++) {
          if (++ch == 'Z'+1) ch = 'A';
          arr[x++][y++] = ch;
        }
        for (int k = 1; k <= m; k++) {
          if (++ch == 'Z'+1) ch = 'A';
          arr[x--][y++] = ch;
        }
        for (int k = 1; k <= m; k++) {
          if (++ch == 'Z'+1) ch = 'A';
          arr[x--][y--] = ch;
        } x++;
    } if (++ch == 'Z'+1) ch = 'A';
    arr[x][y] = ch;
    
    for (int k=0; k < n*2; k++) {
        for (int z=0; z < n*2; z++) {
            if (arr[k][z] == 0) printf("  ");
            else printf("%c ", arr[k][z]);
        } printf("\n"); 
    }
}   