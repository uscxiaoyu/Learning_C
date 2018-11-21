/*
将5名学生的身高按升序排列
*/

#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
    char  name[NAME_LEN];
    int   height;
    float weight;
    long  schols;
} student;

void swapStudent(student *x, student *y) {
    student temp = *x;
    *x = *y;
    *y = temp;
}

void sortByHeight(student a[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++){
        for (j = n-1; j > i; j--){
            if (a[j-1].height > a[j].height)
                swapStudent(&a[j-1], &a[j]);
        }
    }
}

int main(void) {
    int i;
    student std[] = {
        {"Sato", 178, 61.2, 80000},
        {"Sanaka", 175, 62.5, 73000},
        {"Takao", 173, 86.2, 0},
        {"Mike", 165, 72.3, 70000},
        {"Masaki", 179, 77.5, 70000}
    };

    for (i = 0; i < NUMBER; i++){
        printf("%-8s %6d%6.1f%7ld\n",
                std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
    sortByHeight(std, NUMBER);
    puts("\n按身高排序:");
    for (i = 0; i < NUMBER; i++){
        printf("%-8s %6d%6.1f%7ld\n",
                std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
}
