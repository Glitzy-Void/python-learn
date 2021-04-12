#include<stdio.h>
int main(void)
{
    double r,h;
    //设圆半径r，圆柱高h。为了便于后续计算。设变量为double型
    double c,s,sq,vq,vz;
    //设圆周长，圆面积，圆表面积，圆球体积，圆柱体积
    double pi=3.1415926;
    printf("请输入圆半径:\n");
    scanf("%f",&r);
    printf("请输入圆柱高:\n");
    scanf("%f",&h);
    c=2.0*pi*r;s=pi*r*r;sq=4.0*pi*r*r;vq=(4.0/3.0)*pi*r*r*r;vz=s*h;
    //圆周长公式、圆面积公式、圆表面积公式、圆球体积、圆柱体积
    //公式设定时候，注意数值类型 如球体积公式有4/3 应当设定为4.0/3.0
    printf("圆周长为%.2f\n圆面积为%.2f\n圆表面积为%.2f\n圆球体积为%.2f\n圆柱体系为%.2f\n",c,s,sq,vq,vz);
    //设定输出格式为%.2f表示小数点后两位输出
}