#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,g,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&g,&l);
        if(l%g){
            printf("-1\n");
        }
        else{
            printf("%d %d\n",g,l);
        }
    }
    return 0;
}
