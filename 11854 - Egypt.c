#include<stdio.h>
int main()
{
    long int t,n,i,j,a,b,c,a1,b1,c1,d1,f1,s1;
    while(scanf("%ld %ld %ld",&a,&b,&c)==3){
       if(a==0 && b==0 && c==0){
        break;
       }
       a1 = c*c + b*b;
       b1 = a*a + c*c;
       c1 = a*a + b*b;
       s1 = a*a;
       d1 = b*b;
       f1 = c*c;
       if(a1== s1 || b1 == d1 || c1 == f1){
        printf("right\n");
       }
       else{
        printf("wrong\n");
       }
    }
  return 0;
}

