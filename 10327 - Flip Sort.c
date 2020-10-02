
#include<stdio.h>

int main()

{

    int t,a[1001],i,k,temp,count,d;

    while(scanf("%d",&t)!=EOF){

        for(k=0;k<t;k++){

        scanf("%d",&a[k]);

        }

        count=0;

        for(i=1;i<=t-1;i++){

                d=i;

           while(d>0 && a[d]<a[d-1]){

                    temp=a[d];

                    a[d]=a[d-1];

                    a[d-1]=temp;

                    d--;

                    count++;

                }
            }

              printf("Minimum exchange operations : %d\n",count);
        }

    return 0;
}
