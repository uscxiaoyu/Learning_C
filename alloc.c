#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p, *cp, i;
    p = malloc(6 * sizeof(int));
    cp = p;

    printf("请输入10个整数:\n");
    for (i = 0; i < 5; i++){
        printf("第%d个整数:", i + 1);
        scanf("%d", p++);
    }

    printf("您输入的数为:");
    for (i = 0; i < 5; i++){
        printf("%d ", *cp++);
    }
    printf("\n");
}
