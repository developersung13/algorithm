#include <iostream>
using namespace std;

template <typename T>
T max(T arr[], int len) {
	T max = arr[0];
	for (int k = 1; k < len; k++)
		if (max < arr[k])
			max = arr[k];
	return max;
}

int main() {
	int x[] = { 3, 4, 1, 5, 2 };
	char c[] = { 'e', 'a', 'c', 'b', 'f' };

	cout << max(x, 5) << ' ' << max(c, 6);
}
