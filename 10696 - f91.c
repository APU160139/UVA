#include<stdio.h>

int main()

{

    long long int N,t,a,b;

    while(scanf("%lld",&N)==1){

    if(N==0){

        break;

    }

    else if(N<=100){

       a=101-10;

       printf("f91(%lld) = %lld\n",N,a);

    }

    else if(N>=101){

        b=N-10;

        printf("f91(%lld) = %lld\n",N,b);

        }

    }

   return 0;
}
