#include<stdio.h>
int main()
{
    int n,r,i,j,s[1000],count;
    while(scanf("%d",&n)==1){
            count=0;
        if(n==0){
            break;
        }
        for(i=0;;i++){
            r=n%2;
            if(r==1){
              count++;
            }
            s[i]=r;
            if(n==0){
                break;
            }
            n=n/2;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--){
            printf("%d",s[j]);
        }
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
