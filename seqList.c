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
