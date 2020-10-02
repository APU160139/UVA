#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a,i,square;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        printf("Case %d:",i);
        square=sqrt(n);
        for(a=square-1;a>=1;a--){
            x=n-a*a;
            if(x%a==0){
                printf(" %d",x);
            }
        }
        printf("\n");
    }

    return 0;
}
