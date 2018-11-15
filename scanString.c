#include <stdio.h>

int main(void) {
    char name[] = "hello";
    printf("请输入你的名字:\n");
    scanf("%s", name);

    printf("您好,%s先生/女士!!\n", name); //name不带&
    return 0;
}
