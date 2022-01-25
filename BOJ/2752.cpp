#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[3];
 
int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	cin >> arr[0] >> arr[1] >> arr[2];
	stable_sort(arr, arr + 3);
	cout << arr[0] << ' ' << arr[1] << ' ' << arr[2];
	return 0;
}