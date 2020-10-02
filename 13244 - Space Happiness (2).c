#include<stdio.h>
int main()
{
    long long int n,p,s;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        p=(n*n)+1;
        s=p/2;
        printf("%lld\n",s);
    }
   return 0;
}
