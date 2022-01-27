#include <iostream>
using namespace std;

int N, i;
int numArr[10001];

int main(int argc, const char* argv[]) {

	scanf("%d", &N);
	
	for (int k = 0; k < N; k++) {
		scanf("%d", &i);
		numArr[i]++;
	}

	for (int k = 1; k <= 10000; k++)
		for (int z = 0; z < numArr[k]; z++)
			printf("%d\n", k);
	return 0;
}