#include<stdio.h>
#include<string.h>
int main()
{
    int t,p,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d,",&p);

    if((p==2) || (p==3) || (p== 5) || (p==7) || (p== 13)|| (p== 17))
    {
        printf("Yes\n");
    }
        else{
          printf("No\n");
        }
    }
    return 0;
}

