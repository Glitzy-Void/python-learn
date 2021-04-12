#include<stdio.h>
int main(void)
{
    int x='f';
    //将f的ascii值102赋给x
    printf("%c\n",'A'+(x-'a'+1));
    //将字符都转化为整型 则等价于 65+（102-97+1）=71
    //71对应的ascii字符为'G'
}