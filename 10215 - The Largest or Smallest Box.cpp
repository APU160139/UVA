#include<bits/stdc++.h>
using namespace std;
#define E 1e-6
int main()
{
    double l,w,x,d;
    while(scanf("%lf %lf",&l,&w)!=EOF){
        d=sqrt(w*w+l*l-w*l);
        x=((w+l)-d)/6.0;
        printf("%.3f 0.000 ",x+E);
        if(l>0 && w>0){
            if(l<w){
                printf("%.3f",l/2.0+E);
            }
            else{
                printf("%.3f",w/2.0+E);
            }
        }
     printf("\n");
    }
    return 0;
}
