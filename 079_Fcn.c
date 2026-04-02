// Call by reference
#include <stdio.h>

void sum(int *x, int *y);

int main() {
    int x = 5, y = 7;
	sum(&x, &y);  
	return 0;
}

void sum(int *x, int *y) {
    int suma = *x + *y;
    printf("Sum is: %d\n", suma);
}