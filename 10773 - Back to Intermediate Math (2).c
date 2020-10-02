#include<stdio.h>

#include<math.h>

int main()

{

    float d,v,u,p,s,a,h;

    int t,i;

    scanf("%d",&t);

    for(i=1;i<=t;i++){

    scanf("%f %f %f",&d,&v,&u);

    if(u<=v || u==0 || v==0 ){

        printf("Case %d: can't determine\n",i);
    }

    else{

    a=sqrt(u*u-v*v);

    s=d/a;

    h=d/u;

    p=s-h;

    printf("Case %d: %.3f\n",i,p);

    }

 }

 return 0;

}
