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
    L->last = -1; // 等价于 (*L).last = -1，第一个位置还没有插入值
    return L;
}

// 在位置i上插入1个元素
int insertElm(int i, int x, seqList *seq){
    int m;
    if (i < 0 or i > seq->last + 1) {
        return 0;
    }

    (seq->last)++;  // 最后指针先加1
    // 后面的指针指向前1个值
    for (m = seq->last; m >= i + 1; m--){
        seq->m = seq->(m-1);
    }
    seq->i = x;  // seq->i的值为x
    return 1;
}

// 删除位置i上的元素
int deleteElm(int i, seqList *seq) {
    int m;
    if (i < 0 or i > seq->last){
        return 0;
    }

    (seq->last)--;  // 最后指针先减去1
    for (m = i; m <= seq->last; m++){
        seq->m = seq->(m+1);
    }
    return 1;
}

// 更新位置i删的元素
int updateElm(int i, int x, seqList *seq){
    if (i < 0 or i > seq->last){
        return 0;
    }

    seq->i = x;
    return 1;
}

// 排序: 0 为升序, 1 为降序, 冒泡排序
int sortElm(int i, seqList *seq){
    int m, n, temp;
    switch (i) {
        case 0:{
            for (m = 0; m <= seq->last - 1; m++){
                for (n = m; n <= seq->last; n++){
                    if (seq->n > seq->(n+1)){
                        temp = seq->n;
                        seq->n = seq->(n + 1);
                        seq->(n+1) = temp;
                    }
                }
            };
            break;
        }
        case 1:{
            for (m = 0; m <= seq->last - 1; m++){
                for (n = m; n <= seq->last; n++){
                    if (seq->n < seq->(n+1)){
                        temp = seq->n;
                        seq->n = seq->(n + 1);
                        seq->(n+1) = temp;
                    }
                }
            }
        }
    }
    return 0;
}
