#include <stdio.h>
int main(void){
    int x;
    int n = 1;
    printf("请输入1个整数:\n");
    scanf("%d", &x);
    while ( x/10 != 0) {
        x /= 10;
        n++;
    }
    printf("x为%d位整数", n);
    return 0;
}