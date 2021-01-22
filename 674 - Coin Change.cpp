#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,N=7500;
    int a[N] = {1,1,1,1,1};
    for(i=5;i<N;i++){
         a[i] = a[i] + a[i-1];
    }
    for(i=5;i<N;i++){
        a[i] = a[i] + a[i-5];
    }
    for(i=10;i<N;i++){
        a[i] = a[i] + a[i-10];
    }
    for(i=25;i<N;i++){
         a[i] = a[i] + a[i-25];
    }
    for(i=50;i<N;i++){
        a[i] = a[i] + a[i-50];
    }
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",a[n]);
    }

    return 0;
}

