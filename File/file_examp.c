#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch, filename[10];
    printf("���������õ��ļ���:");
    scanf("%s", filename);
    getchar();
    if ((fp=fopen(filename, "w"))==NULL){
        printf("cannot open file\n");
        exit(0); // ��ֹ����
    }
    printf("������һ���ַ���(��#����):");
    ch = getchar();  // �������1���ַ���Ȼ���ٻس�����ȡ��1���ַ������whileѭ��
    while (ch != '#'){
        fputc(ch, fp);
        putchar(ch);  // ����ַ����
        ch = getchar();  // �����ȡ�����е��ַ�����
    }
    fclose(fp);
    putchar(10);
    return 0;
}
