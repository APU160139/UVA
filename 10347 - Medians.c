#include<stdio.h>

#include<math.h>

int main()

{

    double a,b,c,area,s,d,e;

    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){


        s=(a+b+c)/2;

        printf("%lf\n",s);

        d=s*(s-a)*(s-b)*(s-c);

        printf("%lf\n",d);

        e=sqrt(d);

        printf("%lf\n",e);

        area=(4/3)*e;

        printf("%.3lf\n",area);


    }


    return 0;
}
