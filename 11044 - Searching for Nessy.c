#include<stdio.h>
int main()
{
    int t,a,b,s,i,a1,b1;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        a1=a/3;
        b1=b/3;
        s=a1*b1;
        printf("%d\n",s);
    }
    return 0;
}
