#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    long long int n,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        p=(-1+sqrt(1+8*n))/2;
        printf("%lld\n",p);
    }
    return 0;
}
