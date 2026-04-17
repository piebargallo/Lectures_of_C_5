// No argument with return type
#include <stdio.h>

int sum(void);

int main()
{
	int s;
	s = sum();
	printf("sum: %d\n", s);
	return 0;
}

int sum(void)
{
	int a = 1, b = 1;
	return a + b;
}