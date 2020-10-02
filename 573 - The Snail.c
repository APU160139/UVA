#include<stdio.h>

int main()

{
    float h,u,d,f,p,q,r,count=0;

    scanf("%f %f %f %f",&h,&u,&d,&f);

    r=u;

    while(p<h){

    q=u-((u*f)/100);

    p=((r-d)+q)-d;

    r=p;

    u=q;

    printf("%f\n",p);

    count++;

    }

    printf("%f\n",count);

    return 0;

}
