#include <stdio.h>
int main(void){
    int x;
    int n = 1;
    printf("������1������:\n");
    scanf("%d", &x);
    while ( x/10 != 0) {
        x /= 10;
        n++;
    }
    printf("xΪ%dλ����", n);
    return 0;
}