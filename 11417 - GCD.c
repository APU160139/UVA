#include<stdio.h>

int GCD(int x,int y)

{


  while(x!=y){

    if(x>y){

        return GCD(x-y,y);
    }

    else{

        return GCD(x,y-x);
    }
  }

  return x;
}

int main()

{
    int N,i,j,G;

    while(scanf("%d",&N)==1){

            G=0;

            if(N==0){

                break;
            }

        for(i=1;i<N;i++){

            for(j=i+1;j<=N;j++){

                 G+=GCD(i,j);
            }

        }

        printf("%d\n",G);

    }

   return 0;
}

