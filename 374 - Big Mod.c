#include<stdio.h>
int long long bigmod(int long long a,int long long p,int long long m);
int main()
{
      int long long a,p,m,res;
            while(scanf("%lld",&a)==1){
            scanf("%lld",&p);
            scanf("%lld",&m);
                  res=bigmod(a,p,m);
                  printf("%lld\n",res);
            }

      return 0;
}

int long long bigmod(int long long a,int long long p,int long long m)
{
      if(p==0)
      return 1;
      if(p%2==0){
            int long long c=bigmod(a,p/2,m);
            return c*c%m;
      }
      else
      {
            return  (a * bigmod(a,p-1,m))%m;
      }


}
