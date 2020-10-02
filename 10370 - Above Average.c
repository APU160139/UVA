#include <stdio.h>
int main()
{
    int s[1000],i,j,k;
    float t,n,sum,avg,c,res;
    while(scanf("%f",&t)==1){
        for(i=1;i<=t;i++){
        scanf("%f",&n);
        sum=0;
        for(j=0;j<n;j++){
            scanf("%d", &s[j]);
            sum=sum+s[j];
        }
        avg=sum/n;
        c=0;
        for(k=0;k<n;k++){
            if(s[k]>avg)
                c++;
        }
        res=(float)(100*c)/n;
        printf("%.3f%%\n",res);
        }
   }
    return 0;
}
