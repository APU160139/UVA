#include<stdio.h>

int main()

{
    int j,t,n,i,p,a,count,count1,count2,count3,count4,count5,count6,count7,count8,count9;

    while(scanf("%d",&t)==1){

            if(t<0 || t>20){

                break;
            }


     while(t--){

     count=0;

     count1=0;

     count2=0;

     count3=0;

     count4=0;

     count5=0;

     count6=0;

     count7=0;

     count8=0;

     count9=0;


    scanf("%d",&n);

    for(i=1;i<=n;i++){

        p=i;

        while(p!=0){

          a=p%10;

          p=p/10;

          if(a==0){

            count++;
          }

          if(a==1){

            count1++;
          }

          if(a==2){

            count2++;
          }

          if(a==3){

            count3++;
          }

          if(a==4){

            count4++;
          }

          if(a==5){

            count5++;
          }

          if(a==6){

            count6++;
          }

          if(a==7){

            count7++;
          }

          if(a==8){

            count8++;
          }

          if(a==9){

            count9++;
          }


        }

    }

   printf("%d %d %d %d %d %d %d %d %d %d\n",count,count1,count2,count3,count4,count5,count6,count7,count8,count9);


    }

     return 0;

    }

}

