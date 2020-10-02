#include<stdio.h>

#include<math.h>

#define pi acos(-1)

int main()

{
    double a,b,c,s,A,R,area;

    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){

            if(a==0 && b==0 && c==0){

                 printf("The radius of the round table is: 0.000\n");

            }

    else{

    s=(a+b+c)/2;

    A=sqrt(s*(s-a)*(s-b)*(s-c));

    R=A/s;

    printf("The radius of the round table is: %.3lf\n",R);

    }

    }

    return 0;

}

