#include <stdio.h>
#define MAXCHAR 100
int atoi(char s[]);

int main()
{
    char c, s[MAXCHAR];
    int i, num_s;

    i = 0;
    printf("请输入一个整数(回车终止)）");
    while (i < MAXCHAR && (c = getchar()) != '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i + 1] = '\0';
    num_s = atoi(s);
    printf("\n你输入的值为%d\n", num_s);
    return 0;
}

int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}
