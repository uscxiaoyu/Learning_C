#include <stdio.h>
#define MAXCHAR 10000
int str_len(char s[]);

int main()
{
    char sarray[MAXCHAR];
    int c, i, len_str;

    i = 0;
    while ((c = getchar()) != EOF)
    {
        sarray[i] = c;
        ++i;
    }
    sarray[i + 1] = '\0';
    len_str = str_len(sarray);
    printf("\n字符长度:%d\n", len_str);
}

int str_len(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}