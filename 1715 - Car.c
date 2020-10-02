#include<stdio.h>

#include<math.h>

int main()

{

    double t,u,v,a,s,T,A,S,T1,S1,T2,V,T3,U;

    int c=0;

    while(scanf("%lf",&T)==1){

    if(T==0){

        break;
    }

    else if(T==1){

        scanf("%lf %lf %lf",&u,&v,&t);

        A=(v-u)/t;

        S=(u*t)+(.5*A*t*t);

        printf("Case %d: %.3lf %.3lf\n",++c,S,A);
    }

    else if(T==2){

         scanf("%lf %lf %lf",&u,&v,&a);

         T1=(v-u)/a;

         S1=(u*T1)+(.5*a*T1*T1);

         printf("Case %d: %.3lf %.3lf\n",++c,S1,T1);
    }

     else if(T==3){

         scanf("%lf %lf %lf",&u,&a,&s);

         V=sqrt((u*u)+(2*a*s));

         T2=(V-u)/a;

         printf("Case %d: %.3lf %.3lf\n",++c,V,T2);
    }

     else if(T==4){

         scanf("%lf %lf %lf",&v,&a,&s);

         U=sqrt(v*v-2*a*s);

         T3=(v-U)/a;

         printf("Case %d: %.3lf %.3lf\n",++c,U,T3);
    }
}

return 0;

}
