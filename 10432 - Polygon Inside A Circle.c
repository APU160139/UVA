#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double r,n,c,d,e,f,g;
    while(scanf("%lf %lf",&r,&n)!=EOF){
        c=(n*r*r)/2;
        e=360/n;
        f=e*(pi/180);
        g=sin(f);
        d=c*g;
        printf("%.3lf\n",d);
    }
    return 0;
}
