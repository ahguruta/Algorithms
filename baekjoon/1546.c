#include <stdio.h>
int main() {
	int a, b, c;
	int x = 0, y = 0;
	int z;

	scanf("%d", &z);

	while (z) {
		scanf("%d %d", &a, &b);
		x = (a > b) ? b : a;
		for (c = 1; c <= x; c++) {
			if (a % c == 0 && b % c == 0)
				y = c;
		}
		printf("%d\n", a * b / y);
		z--;
	}
}
