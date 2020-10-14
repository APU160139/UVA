#include<stdio.h>
int main()
{
    long long int a,b,c,d,t,i;
    while(scanf("%lld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
            if(a==b && b==c && c==d){
               printf("square\n");
            }
            else if((a==b && c==d)||(a==c && b==d)||(a==d && b==c)){
                printf("rectangle\n");
            }
            else if((a<=(b+c+d))&&(b<=(a+c+d))&&(c<=(a+b+d))&&(d<=(a+b+c))){
               printf("quadrangle\n");
            }
            else{
               printf("banana\n");
            }

        }
    }
    return 0;
}
