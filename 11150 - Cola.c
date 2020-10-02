#include<stdio.h>

int main()

{

    int n,h,sum,total;

    while(scanf("%d",&n)==1){

    h=n;

    while(h>=3){

        n=n+(h/3);

        h=(h/3)+(h%3);

    }
     if(h==2){

        n=n+1;
    }

    printf("%d\n",n);

    }

    return 0;
}
