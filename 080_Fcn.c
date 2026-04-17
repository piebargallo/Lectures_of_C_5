// No argument without return type
#include <stdio.h>

int sum(void);

int main()
{
	sum();
	return 0;
}

int sum(void)
{
	int a = 1, b = 1, sum = 0;
	sum = a + b;
	printf("sum: %d\n", sum);
}

