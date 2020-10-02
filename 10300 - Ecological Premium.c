#include <stdio.h>

int main()

{

    long long a,b,c,t,n,i,sum;

    scanf("%lld",&t);

    while(t--){

        scanf("%lld",&n);

        sum=0;

        for(i=0;i<n;i++){

            scanf("%lld %lld %lld",&a, &b, &c);

            sum=sum+a*c;

        }

        printf("%lld\n",sum);

    }

    return 0;

}
