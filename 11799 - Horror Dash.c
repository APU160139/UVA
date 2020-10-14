#include<stdio.h>
int main()
{
    int t,n,s,m,i,j;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            m=0;
            scanf("%d",&n);
            for(j=1;j<=n;j++){
                scanf("%d",&s);
                if(s>m)
                    m=s;
            }
            printf("Case %d: %d\n",i,m);
        }
    }
    return 0;
}
