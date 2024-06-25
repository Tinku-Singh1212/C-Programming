#include<stdio.h>

int main()
{
    char str[40] = "Tinku"; 
	char str2[20] = "Singh";
    char *p = str;
    char *p1 = str2;

    while (*p != '\0')
    {
        p++;
    }

    while (*p1 != '\0')
    {
        *p = *p1;
        p++;
        p1++;
    }

    *p = '\0';

    printf("%s\n", str);

    return 0;
}

