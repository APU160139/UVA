#include<stdio.h>

#include<string.h>

int main()

{

    long i,len,s=0;

    char t[10000];

    while(gets(t)){

            len=strlen(t);

        for(i=0;i<len;i++){

            if(t[i]=='"'){

                s=s+1;

                if(s%2==1)

                    printf("``");


                else

                    printf("''");
            }

            else

                printf("%c",t[i]);
        }

        printf("\n");

    }

    return 0;

}
