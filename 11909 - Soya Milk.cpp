#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    int l,w,h,t;
    double x,v,tri;
    while(scanf("%d %d %d %d",&l,&w,&h,&t)==4){
        x=l*tan(pi*t/180);
        if(x>h){
            v=.5*h*h*l*w/x;
        }
        else{
            tri=.5*x*l*w;
            v=(l*w*h)-tri;
        }
        printf("%.3lf mL\n",v);
    }
    return 0;
}
