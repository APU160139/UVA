#include<stdio.h>
int main()
{
    int t,i;
    float f,C1,F,C,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%f %f",&C,&d);
        f=(((9*C)/5)+32);
        F=f+d;
        C1=(5*F-160)/9;
        printf("Case %d: %.2f\n",i,C1);
    }
    return 0;
}
