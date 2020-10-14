#include <stdio.h>
int main()
{
    int t,i;
    long long int a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("Case %d: ",i);
        if(a+b<=c||b+c<=a||c+a<=b){
          printf("Invalid\n");
        }
        else if(a==b&&b==c){
           printf("Equilateral\n");
        }
        else if(a==b||b==c||c==a){
            printf("Isosceles\n");
        }
        else{
           printf("Scalene\n");
        }
    }
    return 0;
}
