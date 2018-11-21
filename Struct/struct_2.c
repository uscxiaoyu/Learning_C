/*
拥有超能力的sanaka
*/
#include <stdio.h>

#define NAME_LEN 64

typedef struct {
    char  name[NAME_LEN];
    int   height;
    float weight;
    long  schols;
} student; // student为struct 的同义词

void hiroko(student *std) {
    if (std->height < 180) std->height = 180;  // (*std).height
    if (std->weight > 80) std->weight = 80;  // (*std).weight
}

int main(void) {
    student sanaka = {"Sanaka", 175, 65, 73000};

    hiroko(&sanaka);

    printf("姓名=%s\n", sanaka.name);
    printf("身高=%d\n", sanaka.height);
    printf("体重=%.1f\n", sanaka.weight);
    printf("奖金=%ld\n", sanaka.schols);
    return 0;
}
