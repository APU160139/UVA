#include<stdio.h>

int main()

{
    float l,w,d,g,p;

    int t,i,count=0;

    scanf("%d",&t);

    for(i=1;i<=t;i++){

        scanf("%f %f %f %f",&l,&w,&d,&g);

        p=l+w+d;

        if(p<=125 && g<=7 || l<=56 && w<=45 && d<=25 && g<=7){

            count++;

            printf("1\n");

        }


        else{

             printf("0\n");

        }


    }

  printf("%d\n",count);

  return 0;

}


