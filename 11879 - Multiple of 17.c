#include<stdio.h>
#include<string.h>
int main()
{
    char n[111];
    int l,r,i;
    while (scanf("%s",n)!=EOF){
        r=0;
        l=strlen(n);
        if (l==1 && n[0]=='0'){
          return 0;
        }
        for (i=0;i<l;i++){
            r=r*10+n[i]-'0';
            r=r%17;
        }
        if (r==0){
          printf("1\n");
        }
        else{
          printf("0\n");
        }
    }
    return 0;
}
