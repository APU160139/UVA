#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p,c;
    bool ok;
    while(1){
      scanf("%d",&n);
      if(n==0){
          break;
       }
      for(x=2;;x++){
            c=n-1;
            p=(x-1)%c;
            ok=1;
           while(c>1){
                if(p==0){
                    ok=0;
                    break;
                }
                c--;
                p=(p+x-1)%c;
            }
            if(ok){
                printf("%d\n",x);
                break;
            }
        }
    }
    return 0;
}

