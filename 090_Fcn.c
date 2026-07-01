// Return a string from a function
#include <stdio.h>

char *display();

int main()
{
	char *str;
	str = display();
	printf("String is: %s\n", str);
	return 0;
}

char *display()
{
	return "Paco";
}
