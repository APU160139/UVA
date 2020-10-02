#include<stdio.h>
int main()
{
int n,p,s,b,t,r;
while(scanf("%d%d",&n,&p)==2)
{
s=n;
t=0;
while(s>=p)
{
b=s/p;
r=s%p;
s=b+r;
t=t+b;
}
printf("%d\n",n+t);
}
return 0;
}
