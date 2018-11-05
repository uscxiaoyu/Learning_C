#include <stdio.h>
#define MAXCHAR 100
int lower(int c);

int main()
{
    int i;
    char s[MAXCHAR], c;

    printf("Please input a cap word:\n");
    i = 0;
    while (i < MAXCHAR && (c=getchar()) != '\n')
    {
	    s[i] = lower(c);
	    ++i;
    }
    s[i] = '\0';
    printf("The word you input is:\n%s\n", s);
    return 0;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
	    return c + 'a' - 'A';
    else
	    return c;
}
