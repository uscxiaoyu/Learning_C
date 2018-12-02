#include <stdio.h>
#define MAXSIZE 1000

typedef struct {
    int data[MAXSIZE];
    int last;
} seqList;

// 初始化线性表
seqList * init_SeqList(void){
    seqList *L;
    L = malloc(sizeof(seqList));
    L->last = -1; // 等价于 (*L).last = -1
    return L;
}

// 在位置i插入整型值x
int Insert_Seqlist(seqList *L, int i, int x){
    int j;
    if (L->last == MAXSIZE-1){
        printf("表满");
        return -1;
    }
    else if (i < 1 || i > L->last + 2){
        printf("位置错");
        return 0;
    }

    for (j=L->last; j>=i-1; j--){
        L->data[j+1] = L->data[j];
    }
    L->data[i-1] = x;
    L->last++;

    return 1;
}
