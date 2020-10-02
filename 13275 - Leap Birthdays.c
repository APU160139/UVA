#include<stdio.h>
int main()
{
    int T,d,m,y,q,i,p,j,s;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        p=0;
        scanf("%d %d %d %d",&d,&m,&y,&q);
        if(d==29 && m==2){
           for(j=y+1;j<=q;j++){
            if((j%400==0)|| (j%100!=0) &&(j%4==0))
             p++;
           }
    printf("Case %d: %d\n",i,p);
        }
        else{
            s=q-y;
            printf("Case %d: %d\n",i,s);
        }
    }
    return 0;
}
