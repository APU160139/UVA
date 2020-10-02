#include<bits/stdc++.h>
using namespace std;
int main(){
   int init,c1,c2,c3,t1,t2,t3,angel;
   while(scanf("%d %d %d %d",&init,&c1,&c2,&c3)==4){
    if(init==0 && c1==0 && c2==0 && c3==0){
        break;
    }
    if(init>c1){
       t1=init-c1;
    }
    else{
        t1=(init-c1)+40;
    }
     if(c2>c1){
       t2=c2-c1;
    }
    else{
        t2=(c2-c1)+40;
    }
     if(c2>c3){
       t3=c2-c3;
    }
    else{
        t3=(c2-c3)+40;
    }

    angel= 1080+((t1+t2+t3)*9);
    printf("%d\n",angel);

   }

return 0;
}
