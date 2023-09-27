#include <stdio.h> 
void main() {
	int x;
	int i;
	int n;
	printf("n = ");
	scanf_s("%d", &n);
	printf("i = ");
	scanf_s("%d", &i);
	x = 1;
	int a; 
	a = i;
	do {
		printf("%d ", i);
		i = i + a;
		x = x + 1;
	} while (x <= n);
}