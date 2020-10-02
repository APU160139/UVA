#include<stdio.h>
#include<string.h>
int main()
{
  char s[105];
  int t,i,j,len,p;
  scanf("%d",&t);
  getchar();
  for(i=1;i<=t;i++){
   gets(s);
     p=0;
    len=strlen(s);
    for(j=0;j<len;j++){
        if((s[j]=='a') || (s[j]=='d') || (s[j]=='g') || (s[j]=='j') || (s[j]=='m') || (s[j]=='p') || (s[j]=='t') || (s[j]=='w') || (s[j]==' '))
            p=p+1;

         else if((s[j]=='b') || (s[j]=='e') || (s[j]=='h') || (s[j]=='k') || (s[j]=='n') || (s[j]=='q') || (s[j]=='u') || (s[j]=='x'))
                p=p+2;

          else if((s[j]=='c') || (s[j]=='f') || (s[j]=='i') || (s[j]=='l') || (s[j]=='o') || (s[j]=='r') || (s[j]=='v') || (s[j]=='y'))
                p=p+3;

          else if((s[j]=='z')||(s[j]=='s'))
            p=p+4;

    }
  printf("Case #%d: %d\n",i,p);
  }
  return 0;
}
