#include<stdio.h>
#include<string.h>
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
         if(c1<=c2 && c1<=c3 && c1<=c4 && c1<=c5 && c1<=c6){
            res=c1;
            printf("%d\n",res);
         }
         else if(c2<=c1 && c2<=c3 && c2<=c4 && c2<=c5 && c2<=c6){
            res=c2;
            printf("%d\n",res);
         }
         else if(c3<=c1 && c3<=c2 && c3<=c4 && c3<=c5 && c3<=c6){
            res=c3;
            printf("%d\n",res);
         }
         else if(c4<=c1 && c4<=c3 && c4<=c2 && c4<=c5 && c4<=c6){
            res=c4;
            printf("%d\n",res);
         }
         else if(c5<=c1 && c5<=c2 && c5<=c4 && c5<=c3 && c1<=c6){
            res=c5;
            printf("%d\n",res);
         }
         else{
            res=c6;
            printf("%d\n",res);
         }
    }
    return 0;
}
