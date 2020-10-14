#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    long int i,n,k,sum=0,comp;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        scanf("%s",&a);
        comp=strcmp("donate",a);
        if(comp==0){
          scanf("%ld",&k);
          sum=sum+k;
       }
       else{
        printf("%ld\n",sum);
      }

    }
return 0;
}
