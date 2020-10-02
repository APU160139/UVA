#include<stdio.h>

int main()

{
    long long int t1,t2,t3,n,i;

    while(scanf("%lld",&n)==1){

       if(n>80 || n==0){

        break;

       }

    t1=1;

    t2=1;

    for(i=0;i<n;i++){

        t3=t1+t2;

        t1=t2;

        t2=t3;
    }

    printf("%lld\n",t1);

    }

    return 0;
}
