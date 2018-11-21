#include <stdio.h>
#define MAXLEN 100

void bSort(int a[], int n);  // bubble sort function
void swap(int *px, int *py);  // swap the two pointers

int main(void) {
    int n, i;
    printf("请输入数组长度:");
    scanf("%d", &n);

    // 通过键盘输入整数数组
    int a[n];
    printf("请输入数组各元素:\n");
    i = 0;
    while (i < n && i <= MAXLEN) {
        printf("  第%d个元素:", i + 1);
        scanf("%d", &a[i]);
        i++;
    }

    bSort(a, n); // 对数组n冒泡排序
    // 打印排序后的数组
    printf("按小到大排序:");
    for (i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");
    return 0;
}

void swap(int *px, int * py){
    int temp = *px;
    *px = *py;
    *py = temp;
}

void bSort(int a[], int n){
    int i, j;
    //int temp;

    for (i = 0; i < n - 1; i++){
        for (j = n - 1; i < j; j--){
            if (a[j-1] > a[j]){
                /*
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                */
                swap(&a[j-1], &a[j]);  // change the pointers
            }
        }
    }

}
