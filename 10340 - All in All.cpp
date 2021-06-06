#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,d,c;
    char a[100000],b[100000];
    while(scanf("%s %s",a,b)==2){
        x=strlen(a);
        y=strlen(b);
        c=0;
        d=0;
        for(i=0;i<x;i++){
            for(j=d;j<y;j++){
                if(a[i]==b[j]){
                    c++;
                    d=j+1;
                    break;
                }
            }
        }
        if(c==x){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
