#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,res;
	char c;
	cin>>n;
	while(n--){
		cin>>hex>>a>>c>>hex>>b;
		if(c=='+'){
           res=a+b;
		}
		else{
           res=a-b;
		}
		cout<<bitset<13>(a)<<" "<<c<<" "<< bitset<13>(b)<<" = "<<res<<endl;
	}
	return 0;
}
