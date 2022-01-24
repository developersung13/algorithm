#include <iostream>
using namespace std;

int A, B, C;

int main() {
	scanf("%d %d %d", &A, &B, &C);
	if (B >= C) { printf("%d", -1); return 0; }
	else printf("%d", A / (C - B) + 1);
	return 0;
}