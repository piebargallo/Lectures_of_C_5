#include <stdio.h>

int jumble(int x, int y);

int main()
{
	int x = 2, y = 5;
	jumble(y, x);
	jumble(y, x);
	printf("%d\n", x);
	return 0;
}

int jumble(int x, int y)
{
	x = 2*x + y;
	return x;
}