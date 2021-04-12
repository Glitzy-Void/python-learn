#include<stdio.h>
int main(void)
{
    int y=10;
    while(y--);
    //空循环题 故只有条件表达式发生变化 
    //当执行到y=0时 此时循环停止 但是依旧执行 y-- 
    //故y的值为-1
    printf("y=%d\n",y);
}