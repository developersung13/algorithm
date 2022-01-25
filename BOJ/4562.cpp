#include <iostream>
using namespace std;

int n;
int a, b;

int main(int argc, const char* argv[]) {
	scanf("%d", &n);
	for(int k=0; k < n; k++) {
		scanf("%d %d", &a, &b);
		puts(a >= b ? "MMM BRAINS" : "NO BRAINS");
	} return 0;
}