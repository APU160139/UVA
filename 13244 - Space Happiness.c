#include<stdio.h>
int main()
{
    long long int t,s,i,sum,j,total;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&s);
        sum=0;
        for(j=s-2;j>=0;j=j-2){
            sum=sum+j;
        }
        total=(sum*2)+s;
        printf("%lld\n",total);
    }
    return 0;
}
