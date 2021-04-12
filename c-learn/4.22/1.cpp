#include<stdio.h>
int main(void)
{
    int x=10,y=20,t=0;
    //
    if(x==y)t=x;x=y;y=t;
    /*
    第一步 判断x==y x是否等于y  因为x=10，y=20 不通过
    跳过分支语句t=x;  执行下一个语句x=y; 此时x=20
    继续执行 y=t; 此时y=0;

    注意 if语句中 复合语句应当用中括号括起来
    
    */
    printf("%d,%d",x,y);
}