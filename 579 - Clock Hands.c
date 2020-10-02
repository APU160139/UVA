#include<stdio.h>

#include<math.h>

int main()

{
    int H,M;

    double a;

    while(scanf("%d:%d",&H,&M)==2){

        if(H==0 && M==0){

            break;
        }

        a=(11/2)*M-30*H;

        if(a>180)

            a=(360-a);

        printf("%.3lf\n",a);
    }

    return 0;

}

