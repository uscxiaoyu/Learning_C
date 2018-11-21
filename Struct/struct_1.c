#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student {
    char  name[NAME_LEN];
    int   height;
    float weight;
    long  schols;
};

int main(void) {
    struct student john;
    strcpy(john.name, "john");
    john.height = 180;
    john.weight = 78;
    john.schols = 7300;

    printf("姓名 = %s, 地址为: %p\n", john.name, &john.name);
    printf("身高 = %d, 地址为: %p\n", john.height, &john.height);
    printf("体重 = %.1f, 地址为: %p\n", john.weight, &john.weight);
    printf("奖金 = %ld, 地址为: %p\n", john.schols, &john.schols);

    return 0;
}
