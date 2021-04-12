#include<stdio.h>
int main(void)
{
    int m=0,n=0;
    char c='a';
    scanf("%d%c%d",&m,&c,&n);
    //输入格式字符串中 无其他插入字符 则输入时应当是连着的
    //举例输入10A10 10被%d读取存储到整型m、n A被%c读取 转化为ascii值存储到字符c
    printf("%d,%c,%d\n",m,c,n);
    //输出时按格式控制符 对应输出 同时输出了逗号（因为逗号是字符串一部分）
}