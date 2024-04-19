#include <stdio.h>

int main() {
	int a, b;

	scanf("%d", &a);
	
	for (b = 2; b <= a; b++) {
		while (a % b == 0) {
			printf("%d ", b);
			a /= b;
		}
	}
}
