#include<stdio.h>
int main()
{
    int T,a,b,i,j,sum,temp;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d",&a,&b);
        a=temp;
        b=a;
        temp=b;
        if(a<b && a==b){
            if(a%2!=0)
            sum=0;
            for(j=a;j<=b;i++)

            sum=sum+j;
        }
        printf("Case %d: %d",i,sum);

    }
    return 0;
}

