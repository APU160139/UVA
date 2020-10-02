#include<stdio.h>

int main()

{
    int T,t1,t2,f,at,ct1,ct2,ct3,c,total,i;

    while(scanf("%d",&T)==1){

        for(i=1;i<=T;i++){

            scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&at,&ct1,&ct2,&ct3);


            if(ct1<=ct2 && ct1<=ct3)

                c=(ct2+ct3)/2;


            else if(ct2<=ct1 && ct2<=ct3)

                c=(ct1+ct3)/2;


              else if(ct3<=ct1 && ct3<=ct2)

                c=(ct1+ct2)/2;


            total=t1+t2+f+at+c;

              if(total>=90)

            printf("Case %d: A\n",i);


         else if(total>=80 && total<90)

            printf("Case %d: B\n",i);


        else if(total>=70 && total<80)

            printf("Case %d: C\n",i);


        else if(total>=60 && total<70)

            printf("Case %d: D\n",i);



        else if(total<60)

            printf("Case %d: F\n",i);

      }


    }


    return 0;

}

