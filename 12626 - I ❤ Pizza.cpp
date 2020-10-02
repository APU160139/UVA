#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,len,j,c1,c2,c22,c3,c33,c4,c5,c6,c7,c8,c9,res;
    char s[601];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    c1=0;
    c22=0;
    c33=0;
    c4=0;
    c5=0;
    c6=0;
    c7=0;
    c8=0;
    c9=0;
        scanf("%s",&s);
        len=strlen(s);
        for(j=0;j<len;j++){
            if(s[j]=='M'){
                c1++;
            }
            if(s[j]=='A'){
                c22++;
            }
            if(s[j]=='R'){
                c33++;
            }
            if(s[j]=='G'){
                c4++;
            }
            if(s[j]=='I'){
                c5++;
            }
            if(s[j]=='T'){
                c6++;
            }

        }
            c2=c22/3;
            c3=c33/2;
          res=min(min(min(min(min(c1,c2),c3),c4),c5),c6);
          printf("%d\n",res);

    }
    return 0;
}

