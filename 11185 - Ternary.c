#include<stdio.h>
int main()
{
    long long int num,rem,base,ter;
    while(scanf("%lld",&num)==1){
    if(num<0){
        break;
    }
    base=1;
    ter=0;
    while(num>0){
        rem=num%3;
        ter=ter+rem*base;
        num=num/3;
        base=base*10;
    }
    printf("%lld\n",ter);
    }
    return 0;
}


