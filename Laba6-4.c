#include <stdio.h> 
void main() {
	int x;
	int i;
	int n;
	printf("n = ");
	scanf_s("%d", &n);
	i = 2;
	x = 1;
	do {
		printf("%d ", i);
		i = i + 2;
		x = x + 1;
	} while (x <= n);
}