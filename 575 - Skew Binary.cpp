#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n,i,s,num,b;
char c[100];
while(gets(c))
{
s=0;
n=strlen(c);
for(i=0;i<n;i++)
    {
    num=c[i]-'0';
    s=s+num*(pow(2,n-i)-1);

    }
if(s==0){
  break;
}
printf("%ld\n",s);
}
return 0;
}

