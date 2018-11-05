#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main()
{
    float fahr, celsius;
    printf("华氏温度\t摄氏温度\n");
    for (fahr=300.0; fahr>=0.0; fahr=fahr-20) {
        celsius = (fahr-32) * 5 / 9.0;
        printf("%8.3f\t%8.3f\n", fahr, celsius);
    };
}
