#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p, i;
    p = malloc(6 * sizeof(int));

    printf("请输入6个整数:\n");
    for (i = 0; i < 6; i++){
        printf("第%d个整数:", i + 1);
        scanf("%d", p++);
    }

    p = p - 6;  // 指向初始位置
    printf("您输入的数为:");
    for (i = 0; i < 6; i++){
        printf("%d ", *p++);
    }
    printf("\n");
}
