#include<stdio.h>
int main(void)
{
    char a='1',b='2';
    //注 此处单引号括起来的 是字符 
    printf("%c,",b++);
    //%c 字符输出 。b++表示先用b的值再进行输出
    printf("%d\n",b-a);
    //计算两个变量之间的ascii差值 并非2-1 而是对应的ascii值 50-49
}