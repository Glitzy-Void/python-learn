#include<stdio.h>
int main(void)
{
    float score[][51];
    int i,n=0,m,count=0;
    for(i=0;i<=50;i++);
    {
        n=0;
        printf("input %d score:",i+1);
        scanf("%f,%f,%f",score[n++][i],score[n++][i],score[n++][i]);
    }

    float cy_ave,cn_ave,mn_ave,c_ave[3];
    for(m=0;m<=i;m++)
    {
        cy_ave+=score[n++][m];
        cn_ave+=score[n++][m];
        mn_ave+=score[n][m];
        c_ave[0]=cy_ave/i;
        c_ave[1]=cn_ave/1;
        c_ave[2]=mn_ave/i;
    }
    float s_score[51],s_ave[51];
    for(m=0;m<=1;m++)
    {
        s_score[m]+=score[0][m]+=score[1][m]+=score[2][m];
        s_ave[m]=s_score[m]/3.o;
    }
    printf("------------------------------------");
    printf("\t\tCY\tCN\tMN\t");
    printf("score:\t %f\t%f\t%f",cy_ave,cn_ave,mn_ave);
    printf("ave:  \t %f\t%f\t%f",c_ave[0],c_ave[1],c_ave[2]);
    printf("------------------------------------");
    printf("student:");
    for(;m<=i;)
    {
        printf("\t| student %d | student %d | student %d | student %d |",m+1,m+2,m+3,m+4);
        printf("score | %7.2f | %7.2f | %7.2f | %7.2f |",s_score[m],s_score[m],s_score[m],s_score[m]);
        printf("ave   | %7.2f | %7.2f | %7.2f | %7.2f |",s_ave[m],s_ave[m],s_ave[m],s_ave[m],s_ave[m]);
    }
}