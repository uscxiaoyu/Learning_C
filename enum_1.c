#include <stdio.h>

enum anaimal {Dog=1, Cat=2, Monkey=3, Invalid=4};

void dog(void) {
    puts("wangwang!!");
}

void cat(void) {
    puts("miao~!!");
}

void monkey(void) {
    puts("jiji!!");
}

enum anaimal select(void) {
    int tmp;
    do {
        printf("0...狗  1...猫  2...猴  3...结束");
        scanf("%d", &tmp);
    } while (tmp < Dog || tmp > Invalid);
    return tmp;
}

int main(void) {
    enum anaimal selected;
    do {
        switch (selected = select()) {
            case Dog: dog(); break;
            case Cat: cat(); break;
            case Monkey: monkey(); break;
        }
    } while (selected != Invalid);
    return 0;
}
