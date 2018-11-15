/*
求解斐波那契数
*/
#include <stdio.h>

long int fib(int n){
    int s;
    if (n <= 0)  //提示错误
        s = -1;
    else if (n == 1)
        s = 0;
    else if (n == 2)
        s = 1;
    else
        s = fib(n-1) + fib(n-2);

    return s;
}

int main(void){
    int n;

    printf("请输入一个整数:");
    scanf("%d", &n);
    printf("第%d项斐波那契数为:%ld\n", n, fib(n));

    return 0;
}
