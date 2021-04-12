#include<stdio.h>
int main(void)
{
    int a;
    char c=10;
    float f=100.0;
    double x;
    //定义各类型变量
    a=f/=c*=(x=6.5);
    //该赋值表达式 完整表达为
    /*
    a=f/=c*=x  (double型x被赋值为6.5)
    a=f/=(c=c*x)  (c*=x表示将c*x的值赋给c 此时c=10*6.5=65  值为整型)
    a=f/=c
    a=(f=f/c)  (f=f/c表示将f除以c的数据赋给f 100.0/65=1.538461……… )
              （运算时整型被转化 并且值存储为单精度）
    a=f  (将浮点数赋值给整型变量 则小数部分被截断)
    */
    printf("%d %d %3.1f %3.1f\n",a,c,f,x);
    //格式符的运用 
}