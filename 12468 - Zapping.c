#include<stdio.h>

#include<math.h>

int main()

{
    int T,a,b;

    while(scanf("%d %d",&a,&b)==2){

            if(a<=0 && b<=0){
                break;
            }

          if(a==0&&b==99){

            i=100-99;

            printf("%d\n",i);

            }
            if(a==99 && b==0){

                 i=100-99;

            printf("%d\n",i);


            }

          if( (a>=0 && a<49)&& (b<=49 && b>0)){

            i=abs(b-a);

               printf("%d\n",i);

          }
           if((a<=50 && a>0) &&(b>=0 && b<50)){

            i=abs(a-b);

               printf("%d\n",i);
           }

           if((a>=50 && a<99)&& (b<=99 && b>51)){

               i=abs(b-a);

               printf("%d\n",i);
           }
           if((a<=99 && a>50) && (b>=51 && b<99)){

             i=abs(a-b);

               printf("%d\n",i);

           }

         }


    return 0;
}
