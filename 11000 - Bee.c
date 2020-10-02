#include<stdio.h>
int main()
{
    long int n,t1,t2,t3,i,sum;
    while(scanf("%ld",&n)==1){
            t1=0;
            t2=1;
            sum=0;
         if(n==-1){
            break;
         }
    for(i=0;i<=n;i++){
        t3=t1+t2;
        t1=t2;
        t2=t3;
       sum=sum+t1;
    }
     printf("%ld %ld\n",sum-t1,sum);
    }
    return 0;
}



