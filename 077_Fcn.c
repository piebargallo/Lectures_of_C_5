#include <stdio.h>

void sum(int a, int b); // fcn pre-declaration

int main() // fcn calling
{
	printf("First sum\n");
	sum(2, 2); 
	printf("\n");
	printf("Second sum\n");
	sum(2, 2);
	return 0;
}

void sum(int a, int b) // fcn definition
{
	int sum = 0;
	sum = a + b;
	printf("Result of sum is: %d\n", sum);
}