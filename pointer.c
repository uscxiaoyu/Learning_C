#include <stdio.h>

int main(void){
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a; // p指向a[0], p = &a[0]

    for (i = 0; i < 5; i++){
        printf("&a[%d]=%p, p+%d=%p\n", i, &a[i], i, p+i);
        printf("a[%d]=%d, *(p+%d)=%d\n", i, a[i], i, *(p+i));
        printf("%d[a]=%d, *(%d+p)=%d\n", i, i[a], i, *(i+p)); //序号[数组]也是合法的
    }
    return 0;
}
