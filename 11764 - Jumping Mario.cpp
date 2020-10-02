#include<bits/stdc++.h>
using namespace std;
int main(){
 int t, n, a[100],i,cnt1=0,cnt2=0,j,p;
 scanf("%d",&t);
 for(p=1;p<=t;p++){
    scanf("%d",&n);
    cnt1=0;
    cnt2=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(j=0;j<i-1;j++){
        if(a[j]>a[j+1]){
            cnt1++;
        }
        else if(a[j]<a[j+1]){
            cnt2++;
        }
        else if(a[j]==a[j+1]){
            continue;
        }
    }
    printf("Case %d: %d %d\n",p,cnt2,cnt1);
 }
return 0;
}
