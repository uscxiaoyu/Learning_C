#include <stdio.h>
int main(void){
    printf("请分别输入身高的英尺和英寸，如输入\"5 7\"表示5英尺7英寸:");
    double foot, inch;
    scanf("%lf %lf", &foot, &inch); //lf对应double类型
    printf("foot = %f, inch = %f\n", foot, inch);
    printf("身高是%f米。\n", (foot + inch / 12) * 0.3048);
}