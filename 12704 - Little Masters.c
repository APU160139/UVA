#include<stdio.h>
#include<math.h>
int main()
{
    int T,x,y,r,i;

    float p,f,g;

    scanf("%d",&T);

    for(i=1;i<=T;i++){

    scanf("%d %d %d",&x,&y,&r);

    p=sqrt(x*x+y*y);

    f=r-p;

    g=r+p;

    printf("%.2f %.2f\n",f,g);

   }
   return 0;
}
