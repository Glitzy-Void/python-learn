#include<stdio.h>
int main(void)
{
    float score[100];
    float max=0,x;
    int n=0;
    printf("input score:");
    scanf("%f",&x);
    for(n=0;n<=100;n++)
    {
        scanf("%f",x);
        if(x<0)  break;
        score[n]=x;
        if(x>=max)max=x;
    }
    printf("max:%f",max);
}
