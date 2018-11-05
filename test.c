#include <stdio.h>
#include <limits.h>
void squeeze(char s[], int c);

int main()
{
    char s[] = "abcedfeaac";
    char c;

    printf("删除c字符之前:%s, 长度为:%ld\n", s, sizeof(s));
    c = 'c';
    squeeze(s, c);
    printf("删除c字符之后:%s, 长度为:%ld\n", s, sizeof(s));

}

void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}
