#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,cnt;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        cout<<"Case #"<<i<<": "<<n;
        cnt=0;
        for(j=2;j<sqrt(n)+1;j++){
            if(n%j==0){
                cout<<" = "<<j<<" * "<<n/j;
                cnt++;
            }
            if(cnt==2){
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
