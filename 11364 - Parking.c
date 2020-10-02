#include<stdio.h>
int main()
{
    int t,n,a[21],i,j,k,l,p,q,r,temp;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(k=0;k<n;k++){
            scanf("%d",&a[k]);
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    for(k=0;k<n;k++){
            p=((a[n-1]-a[0])*2);
    }
    printf("%d\n",p);
    }
    return 0;
}
