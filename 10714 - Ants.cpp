#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,l,i,j,s,p,q,u,v,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&l,&n);
        u=0;
        v=0;
        for(j=1;j<=n;j++){
          scanf("%d",&s);
            d=l-s;
            p=min(d,s);
            q=max(d,s);
            u=max(u,p);
            v=max(v,q);
        }
        printf("%d %d\n",u,v);
    }
    return 0;
}
