#include<stdio.h>

int main(void)
{
    float c,f;
    printf("输入华氏温度：");
    scanf("%f",f);
    c=5.0/9.0*(f-32);
    // 5/9无法被正确数学运算 因为都为int型 要修改成5.0/9.0
    printf("摄氏温度为：%.2f",c);
}