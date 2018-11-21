#include "stdio.h"
#define MAXNUM 255

int prime(const int n);

int main(void){
    int i, j, n;
    int p_array[MAXNUM]={0};  // 初始化所有元素为'0'

    j = 0;
    printf("请输入整数上限:");
    scanf("%d", &n);
    printf("1~%d之间所有的素数为:\n", n);
    for (i = 2; i <= n; i++){
        if (prime(i)){
            p_array[j++] = i;
        }
    }

    j = 0;
    while (p_array[j]){
        printf("%d ", p_array[j]);
        j++;
    }
    printf("\n");
    printf("1~%d之间所有的素数个数为:%d\n", n, j-1);
    printf("\n");
    return 0;
}

int prime(const int n){
    int i;

    for (i = n/2; i >= 2; i--){
        if (n % i == 0)
            break;
    }

    if (i == 1)
        return 1;
    else
        return 0;
}
