#include <stdio.h>

int main(void){
    int i;
    char s[] = "ABC";  // 数组字符不可直接重新赋值
    char *ps = "abc";

    i = 0;
    while (s[i]) {
        s[i++] = ps[i];
    }

    ps = "0123456789" + 1; // 指针字符可以直接重新赋值, +i表示将指针ps置于第i+1个位置

    printf("ps=%s\n", ps);
    printf("s=%s\n", s);
}
