#include<stdio.h>
//输入一个小写字母，将其转化为大写字母
int main(void)
{
    int char a;
    printf("输入一个字母")
    scanf("%c",&a);
    if(a>='A'&&a<='z')
    {
        if(a>='a'&&a<='z')
        {
            a=a-32;
            //小写字母与大写字母ascii值差 32
            printf("已转换为：%c",a)；
        }
        else printf("你输入的是大写字母")
    }
    else printf("你输入的是其他字符")
}