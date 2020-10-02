#include<stdio.h>
#include<string.h>
int main()
{
    char S[14];
    int no=0;
    while(scanf("%s",S)){
     if(strcmp(S,"#")==0){
         break;
     }
    else if(strcmp(S,"HELLO")==0){
        printf("Case %d: ENGLISH\n",++no);
    }
    else if(strcmp(S,"HOLA")==0){
        printf("Case %d: SPANISH\n",++no);
    }
    else if(strcmp(S,"HALLO")==0){
        printf("Case %d: GERMAN\n",++no);
    }
    else if(strcmp(S,"BONJOUR")==0){
        printf("Case %d: FRENCH\n",++no);
    }
    else if(strcmp(S,"CIAO")==0){
        printf("Case %d: ITALIAN\n",++no);
    }
    else if(strcmp(S,"ZDRAVSTVUJTE")==0){
        printf("Case %d: RUSSIAN\n",++no);
    }
    else{
        printf("Case %d: UNKNOWN\n",++no);
    }
    }
    return 0;
}
