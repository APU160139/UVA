#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,h1,m1,h2,m2,h3,m3,h4,m4,start1,end1,start2,end2;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        scanf("%d:%d %d:%d",&h3,&m3,&h4,&m4);
        start1=h1*60+m1;
        end1=h2*60+m2;
        start2=h3*60+m3;
        end2=h4*60+m4;
        if(start2>end1 || start1>end2){
           printf("Case %d: Hits Meeting\n",i);
        }
        else{
          printf("Case %d: Mrs Meeting\n",i);
        }
    }
    return 0;
}
