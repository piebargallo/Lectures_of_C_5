#include <stdio.h>

int incre(int i);
	
int main()
{
	int i, j;
	for(i = 0; i <= 4; i++)
	{
		j = incre(i);
		printf("j = %d\n", j);
	}
	return 0;
}

int incre(int i)
{
	static int count = 0;
	count = count + i;
	return(count);
}