#include<stdio.h>

#include<math.h>

int main()

{
    int a,b,count,i,t,s,p;

    while(scanf("%d %d",&a,&b)==2){

        count=0;

        if(a==0 && b==0){

            break;
        }

        for(i=a;i<=b;i++){

            t=sqrt(i);

            p=t*t;

            if(p==i){

            count++;

            }

        }

        printf("%d\n",count);
    }

    return 0;
}
