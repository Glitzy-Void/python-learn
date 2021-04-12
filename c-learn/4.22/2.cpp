#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    //输入值
    if(x--<5) printf("%d",x);
    //先读取x的值 再执行减一操作 
    //如果x小于5 则输出x-1
    else printf("%d",x++);
    //如果x不为上述情况 则x-1 输出 再执行x++操作 此时值为x  
}