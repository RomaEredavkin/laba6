#include <stdio.h> 
void main() {
	int i;
	int step;
	i = 0;
	step = 1;
	do {
		printf("2^%d = %d\n", i, step);
		i = i + 1;
		step = step * 2;
	} while (i <= 5);
}