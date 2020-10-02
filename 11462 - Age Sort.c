#include<stdio.h>

int main()

{

  long int a[100],n,t,i,j,x;

  while(scanf("%d",&n)==1){

    if(n==0){

        break;
    }

    for(i=1;i<=100;i++){

        a[i]=0;
    }

    for(i=0;i<n;i++){

        scanf("%d",&t);

        a[t]=a[t]+1;
    }

    for(i=1;i<=100;i++){

            x=0;

            if(a[i]>0){

                for(j=1;j<=a[i];j++){

                     printf("%d",i);

                       if(x<n){

                        printf(" ");

                       }
                 }

           }
    }

    printf("\n");

  }

    return 0;
}
