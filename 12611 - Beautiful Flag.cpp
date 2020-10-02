#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,length,wideth,left,right,q1,q2,q3,q4,i,w;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&r);
        length=(100*r)/20;
        wideth=(3*length)/5;
        left=(9*length)/20;
        right=(11*length)/20;
        w=wideth/2;
        printf("Case %d:\n",i);
        printf("-%d %d\n",left,w);
        printf("%d %d\n",right,w);
        printf("%d -%d\n",right,w);
        printf("-%d -%d\n",left,w);
    }
    return 0;
}
