#include<stdio.h>
int main(void)
{
    char a='a',b;
    //定义a 赋值字符'a' ；定义b 未赋值
    printf("%c，",++a);
    //先进行a+1运算  此时a='b',然后以%c输出 输出为 'b'
    printf("%c\n",b=a++);
    //b=a++ 即a的值赋给b 此时b='b' 然后a的值+1
}