#include <iostream>
#include <cctype>
using namespace std;

char str[100];

int main() {
	scanf("%s", &str);
	for (int k = 0; str[k] != '\0'; k++) {
		if (str[k] >= 'a' && str[k] <= 'z') printf("%c", toupper(str[k]));
		else printf("%c", tolower(str[k]));
	} return 0;
}