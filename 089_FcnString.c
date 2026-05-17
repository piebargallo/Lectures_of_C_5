#include <stdio.h>

void modify(char* str1, char* str2);

int main()
{
    char str1[] = "Jenny";
    char str2[] = "Kathry";
	modify(str1, str2);
	return 0;
}

void modify(char* str1, char* str2)
{
    int i, l = 0;

    for(i = 0; str1[i] != '\0'; i++)
    {
        l = l + 1;
    }

    str2[l] = 'z';
    str2[l + 1] = '\0';

    printf("Length of string1 is: %d\n", l);
    printf("Both the strings are: %s %s\n", str1, str2);
}