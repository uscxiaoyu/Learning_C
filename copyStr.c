#include <stdio.h>

char *strcp(char *c, const char *s){
    char *t = c;
    while ((*c++ = *s++))
        ;
    return t;
}

int main(void) {
    char s[100];
    char c[100];

    printf("请输入字符串:");
    scanf("%s", s);

    printf("经过复制之后为:%s\n", strcp(c, s));

    return 0;
}
