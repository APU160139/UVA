#include<bits/stdc++.h>
int main(){
 long long int x,s,i;
 while(scanf("%lld",&x)==1){
    s=0;
    for(i=1;i<=x;i++){
        s=s+i*i*i;
    }
 printf("%lld\n",s);
 }
return 0;
}
