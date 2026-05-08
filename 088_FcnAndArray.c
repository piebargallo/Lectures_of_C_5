#include <stdio.h>

int avg(int[], int);

int main()
{
	int average;
	int marks[5] = {10, 20, 30, 40, 50};
	average = avg(marks, 5);
	printf("Average is: %d\n", average);
	return 0;
}

int avg(int marks[], int a)
{
	int i, sum = 0, average = 0;
	for(i = 0; i < a; i++)
	{
		sum = sum + marks[i];
	}
	average = sum / a;
	return average;
}