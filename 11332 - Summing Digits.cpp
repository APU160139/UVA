#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long  n, rem=0,a;
    while(scanf("%lld",&n)){
        if(n==0)
        {
            break;
        }
        while(n>9){
            rem = (n%10);
            n = (n/10);
            n = n+rem;
        }
        printf("%lld\n", n);
    }

}
