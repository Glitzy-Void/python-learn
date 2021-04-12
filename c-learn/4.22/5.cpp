#include<stdio.h>
int main(void)
{
    int x=1,a=0,b=0;
    //switch语句的作用
    switch(x)
    {
        case 0:b++;
        case 1:a++;
        //x=1 跳转到该分支执行 因为没有break 故继续往下执行
        //此时a=a+1 a=1
        case 2:a++;b++;
        //语句继续执行 此时a=2 b=1
    }
    printf("a=%d,b=%d",a,b);
    //打印值 
}