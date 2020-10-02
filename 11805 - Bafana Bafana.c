#include<stdio.h>

int main()

{

 int N,K,P,T,i,s;

 scanf("%d",&T);

 for(i=1;i<=T;i++){

    scanf("%d %d %d",&N,&K,&P);

    s=K+P;

   while(N<s){

       s=s-N;

    }

     printf("Case %d: %d\n",i,s);

 }

 return 0;

}

