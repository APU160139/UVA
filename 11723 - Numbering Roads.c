#include<stdio.h>

int main()

{
       long int t,N,R,A;

       for(t=1;t<=10002;t++){

       scanf("%ld %ld",&R,&N);

       if((R==0)&&(N==0)){

        break;

       }

        A=(R-1)/N;

        if(A>26){

            printf("Case %d: impossible\n",t);
        }

        else{

              printf("Case %d: %d\n",t,A);
        }
    }

    return 0;
}
