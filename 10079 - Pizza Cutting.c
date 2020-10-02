#include<stdio.h>
int main()
{
    long long int s,n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0){
          break;
        }
        s=1+((n*(n+1))/2);
        printf("%lld\n",s);
    }
    return 0;
}
