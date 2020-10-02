#include<stdio.h>
#include<string.h>
int main()
{
    int len,p,i,c,bin;
    char s[100];
    while(gets(s)){
            p=0;
    len=strlen(s);
    for(i=0;i<len;i++){
            if(s[i]=='a')
            p=p+1;
            else if(s[i]=='b')
            p=p+2;
            else if(s[i]=='c')
            p=p+3;
            else if(s[i]=='d')
            p=p+4;
            else if(s[i]=='e')
            p=p+5;
            else if(s[i]=='f')
            p=p+6;
            else if(s[i]=='g')
            p=p+7;
            else if(s[i]=='h')
            p=p+8;
            else if(s[i]=='i')
            p=p+9;
            else if(s[i]=='j')
            p=p+10;
            else if(s[i]=='k')
            p=p+11;
            else if(s[i]=='l')
            p=p+12;
            else if(s[i]=='m')
            p=p+13;
            else if(s[i]=='n')
            p=p+14;
            else if(s[i]=='o')
            p=p+15;
            else if(s[i]=='p')
            p=p+16;
            else if(s[i]=='q')
            p=p+17;
            else if(s[i]=='r')
            p=p+18;
            else if(s[i]=='s')
            p=p+19;
            else if(s[i]=='t')
            p=p+20;
            else if(s[i]=='u')
            p=p+21;
            else if(s[i]=='v')
            p=p+22;
            else if(s[i]=='w')
            p=p+23;
            else if(s[i]=='x')
            p=p+24;
            else if(s[i]=='y')
            p=p+25;
            else if(s[i]=='z')
            p=p+26;
            else if(s[i]=='A')
            p=p+27;
            else if(s[i]=='B')
            p=p+28;
            else if(s[i]=='C')
            p=p+29;
            else if(s[i]=='D')
            p=p+30;
            else if(s[i]=='E')
            p=p+31;
            else if(s[i]=='F')
            p=p+32;
            else if(s[i]=='G')
            p=p+33;
            else if(s[i]=='H')
            p=p+34;
            else if(s[i]=='I')
            p=p+35;
            else if(s[i]=='J')
            p=p+36;
            else if(s[i]=='K')
            p=p+37;
            else if(s[i]=='L')
            p=p+38;
            else if(s[i]=='M')
            p=p+39;
            else if(s[i]=='N')
            p=p+40;
            else if(s[i]=='O')
            p=p+41;
            else if(s[i]=='P')
            p=p+42;
            else if(s[i]=='Q')
            p=p+43;
            else if(s[i]=='R')
            p=p+44;
            else if(s[i]=='S')
            p=p+45;
            else if(s[i]=='T')
            p=p+46;
            else if(s[i]=='U')
            p=p+47;
            else if(s[i]=='V')
            p=p+48;
            else if(s[i]=='W')
            p=p+49;
            else if(s[i]=='X')
            p=p+50;
            else if(s[i]=='Y')
            p=p+51;
            else if(s[i]=='Z')
            p=p+52;
    }
    bin=1;
    for(c=2;c<=p/2;c++)
        if(p%c==0){
                    bin=0;
                    break;
      }
    if(bin==1)
        printf("It is a prime word.\n");
        else
        printf("It is not a prime word.\n");

    }
        return 0;
}
