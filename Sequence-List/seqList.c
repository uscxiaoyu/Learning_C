#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

typedef struct {
    int data[MAXSIZE];
    int last;
} seqList;

// 初始化线性表(顺序表)
seqList *init_SeqList(void){
    seqList *L;
    L = (seqList *)malloc(sizeof(seqList));
    L->last = -1; // 等价于 (*L).last = -1，表示列表中还没有插入值
    return L;
}

// 在位置i上插入1个元素
int insertElm(int i, int x, seqList *seq){
    int m;
    if (i < 0 || i > seq->last + 1) {
        return 0;
    }

    (seq->last)++;  // 最后指针先加1
    // 后面的指针指向前1个值
    for (m = seq->last; m >= i + 1; m--){
        seq->data[m] = seq->data[m-1];
    }
    seq->data[i] = x;  // seq->i的值为x
    return 1;
}

// 删除位置i上的元素
int deleteElm(int i, seqList *seq){
    int m;
    if (i < 0 || i > seq->last){
        return 0;
    }

    (seq->last)--;  // 最后指针先减去1
    for (m = i; m <= seq->last; m++){
        seq->data[m] = seq->data[m+1];
    }
    return 1;
}

// 删除值为x的元素
int removeElm(int x, seqList *seq){
    int i;
    for (i = 0; i <= seq->last; i++){
        if (seq->data[i] == x){
            deleteElm(i, seq);  //删除位置i上的元素
            return 1;
        }
    }
    return 0;
}

// pop
int popElm(int i, seqList *seq){
    int m;
    if (i < 0 || i > seq->last){
        printf("索引超出范围，弹出失败!\n");
        return 0;
    }

    (seq->last)--;  // 最后指针先减去1
    printf("%d", seq->data[i]);
    for (m = i; m <= seq->last; m++){
        seq->data[m] = seq->data[m+1];
    }
    return 1;

}

// 更新位置i的元素
int updateElm(int i, int x, seqList *seq){
    if (i < 0 || i > seq->last){
        return 0;
    }

    seq->data[i] = x;
    return 1;
}

// 排序: 0 为升序, 1 为降序, 冒泡排序
int sortElm(int i, seqList *seq){
    int m, n, temp;
    switch (i) {
        case 0:{
            for (m = 0; m <= seq->last - 1; m++){
                for (n = m; n <= seq->last; n++){
                    if (seq->data[n] > seq->data[n+1]){
                        temp = seq->data[n];
                        seq->data[n] = seq->data[n+1];
                        seq->data[n+1] = temp;
                    }
                }
            };
            break;
        }
        case 1:{
            for (m = 0; m <= seq->last - 1; m++){
                for (n = m; n <= seq->last; n++){
                    if (seq->data[n] < seq->data[n+1]){
                        temp = seq->data[n];
                        seq->data[n] = seq->data[n+1];
                        seq->data[n+1] = temp;
                    }
                }
            }
        }
    }
    return 0;
}

// 索引
int indexElm(int x, seqList *seq){
    int i;
    for (i = 0; i == seq->last; i++){
        if (seq->data[i] == x)
            break;
    }
    if (i == seq->last + 1)
        return -1;  // 没有查找到
    else
        return i;  // 在索引为i的位置查找到
}

// 删除对象
int delete(seqList * seq){
    free(seq);
    seq = NULL;
    return 1;
}

int main(void){
    seqList *a_list;
    a_list = init_SeqList();
    insertElm(0, 5, a_list);
    insertElm(1, 2, a_list);
    printf("第一个元素:%d\n", a_list->data[0]);
    printf("第二个元素:%d\n", a_list->data[1]);
    delete(a_list);
    return 0;
}
