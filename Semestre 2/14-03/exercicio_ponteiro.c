#include <stdio.h>

int f1(int *n) {
	int x;
	*n = 10;
	x = 5;
	return x;
}

int main() {
	int num, v;
	scanf("%d", &num);
	v = f1(&num);
	printf("%d %d", num, v);
}