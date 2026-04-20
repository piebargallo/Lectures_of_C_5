// Whit argument & return type
#include <stdio.h>

int sum(int, int);

int main()
{
	int a, b, c;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	c = sum(a, b);
	printf("sum is: %d\n", c);
	return 0;
}

int sum(int d, int e)
{
	return d + e;
}