#include<stdio.h>

#include<math.h>

int main()

{
    int t,i,n,a,b,c,d,e,f,j,k,p;

    scanf("%d",&t);

    for(i=1;i<=t;i++){

        scanf("%d",&n);

        a=n*567;

        b=a/9;

        c=b+7492;

        d=c*235;

        e=d/47;

        f=e-498;

        j=abs(f);

        k=j/10;

        p=k%10;

        printf("%d\n",p);

    }

    return 0;

}

