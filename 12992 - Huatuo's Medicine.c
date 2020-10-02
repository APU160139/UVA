#include<stdio.h>
int main()
{
    int t,n,i,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        p=n*2-1;
        printf("Case #%d: %d\n",i,p);
    }
    return 0;
}
