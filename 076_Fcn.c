#include <stdio.h>

void sum(); // fcn pre-declaration

int main() // fcn calling
{
	printf("First sum\n");
	sum(); 
	printf("\n");
	printf("Second sum\n");
	sum();
	return 0;
}

void sum() // fcn definition
{
	int a, b, sum = 0;
	printf("Enter first number:\n");
	scanf("%d", &a);
	printf("enter second number:\n");
	scanf("%d", &b);
	sum = a + b;
	printf("Result of sum is: %d\n", sum);
}
