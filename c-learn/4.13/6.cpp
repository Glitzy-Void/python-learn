#include<stdio.h>
int main(void)
{
    int m=0xabc,n=0xabc;
    //'0x'表示常量为十六进制 
    m-=n;
    //m=m-n. m被计算结果0赋值 此时m=0
    printf("%x\n",m);
    //0的十六进制数为0
}
