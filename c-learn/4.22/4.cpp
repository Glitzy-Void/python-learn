#include<stdio.h>
int main (void)
{
    double x=2.0,y;
    if(x<0.0) y=0.0;
    //情况一 判断是否为真 否则跳过该分支
    else if(x<10.0) y=1.0/x;
    //情况二 判断还有没有这样的情况 否则跳过
    else y=1.0;
    //都不包含以上情况是 执行这个语句

    //if……else if……else语句结构的作用 
    printf("%f\n",y);
}