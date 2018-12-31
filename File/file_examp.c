#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch, filename[10];
    printf("请输入所用的文件名:");
    scanf("%s", filename);
    getchar();
    if ((fp=fopen(filename, "w"))==NULL){
        printf("cannot open file\n");
        exit(0); // 终止程序
    }
    printf("请输入一个字符串(以#结束):");
    ch = getchar();  // 如果输入1个字符串然后再回车，读取第1个字符后进入while循环
    while (ch != '#'){
        fputc(ch, fp);
        putchar(ch);  // 逐个字符输出
        ch = getchar();  // 逐个读取缓存中的字符整数
    }
    fclose(fp);
    putchar(10);
    return 0;
}
