#include <stdio.h>

int main(void){
    int a = 0;
    printf("请输入数量:");
    scanf("%d", &a);  /*scanf字符串中的内容是我们要输入的内容*/
    const int AMOUNT = a;  /*const为常量声明符号，已经初始化就不能改变*/
    int price = 0;
    printf("请输入金额:");
    scanf("%d", &price);

    int change = AMOUNT - price;
    printf("找您%d元。\n", change);
    return 0;
}