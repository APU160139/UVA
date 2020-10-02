#include<stdio.h>
int main()
{
    int t,c,e,f,i,j,n,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&c,&e,&f);
        n=c+e;
        s=0;
        while(n>=f){
            s=s+(n/f);
            n=(n/f)+(n%f);
        }
       printf("%d\n",s);
    }
    return 0;
}
