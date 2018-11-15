#include <stdio.h>
/*
求n!
*/
long int fac(int n) {
    long int s;

    if (n == 1)
        s = 1;
    else
        s = n * fac(n-1);  // 调用自身时, s为局域变量, 因此内层的s与外层的s无关.
    return s;
}

int main(void) {
    int n;

    printf("请输入一个整数:");
    scanf("%d", &n);
    printf("%d!的阶乘为:%ld\n", n, fac(n));
    
    return 0;
}
