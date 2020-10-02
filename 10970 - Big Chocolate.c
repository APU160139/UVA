#include<stdio.h>
int main()
{
    int M,N,P,Q;

    while(scanf("%d %d",&M,&N)!=EOF){

        P=M*N;

        Q=P-1;

       printf("%d\n",Q);
    }
    return 0;
}

