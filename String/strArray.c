#include <stdio.h>

int main(void) {
    int i;
    char cs[][20] = {"hello", "world", "teacher", "building"};
    for (i=0; i<4; i++){
        printf("请输入cs[%d]:", i);
        scanf("%s", cs[i]);
    }
    for (i=0; i<4; i++){
        printf("cs[%d]=\"%s\"\n", i, cs[i]);
    }
    return 0;
}
