#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,r,m[100],p[100],h,res,i,j,k;
    while (scanf("%d %d %d", &n, &d, &r)==3){
        if(n==0 && d==0 && r==0){
            break;
        }
        for(i=0;i<n; i++){
            scanf("%d",&m[i]);
        }
        for(j=0;j<n;j++){
            scanf("%d",&p[j]);
        }
        res=0;
        sort(m,m+n);
        sort(p,p+n,greater<int>());
        for(k=0;k<n;k++){
            h=m[k]+p[k];
            if(h>d){
                res=res+(h-d)*r;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
