#include<stdio.h>

#include<string.h>

int main()

{
    char s[1050];

    int rem,i,len;

    while(1){

    scanf("%s",&s);

    len = strlen(s);

    rem=0;

    for(i=1;i<=len;i++){

        rem=rem*10+s[i]-'0';

        rem=rem%11;
    }

    if(rem==0 && len==1){

        break;
    }

    else if(rem==0){

        printf("%s is a multiple of 11.\n",s);
    }

    else{

        printf("%s is not a multiple of 11.\n",s);
    }
}

return 0;

}

