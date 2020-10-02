#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c,x,y;
    while(scanf("%d %d",&m,&n)==2){
    printf("[%d;",m/n);
    c=m%n;
    while(c!=0){
        x=n;
        y=c;
        printf("%d",x/y);
        c=x%y;
        if(c>0){
            printf(",");
        }
        n=y;
    }
    printf("]\n");
  }
  return 0;
}

