#include <stdio.h>
int main(void){
    printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬������\"5 7\"��ʾ5Ӣ��7Ӣ��:");
    double foot, inch;
    scanf("%lf %lf", &foot, &inch); //lf��Ӧdouble����
    printf("foot = %f, inch = %f\n", foot, inch);
    printf("�����%f�ס�\n", (foot + inch / 12) * 0.3048);
}