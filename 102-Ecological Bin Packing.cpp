#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
using namespace std;
int main()
{
    int a[10],b1,b2,b3,g1,g2,g3,c1,c2,c3,bgc,bcg,cgb,cbg,gbc,gcb,min,i;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
    bcg=b2+b3+g1+g3+c1+c2;
    bgc=b2+b3+c1+c3+g1+g2;
    cgb=c2+c3+g1+g3+b1+b2;
    cbg=c2+c3+b1+b3+g1+g2;
    gbc=g2+g3+b1+b3+c1+c2;
    gcb=g2+g3+c1+c3+b1+b2;
    min=bcg;
    if(min>bgc){
        min=bgc;
    }
    if(min>cgb){
        min=cgb;
    }
     if(min>cbg){
        min=cbg;
    }
     if(min>gbc){
        min=gbc;
    }
     if(min>gcb){
        min=gcb;
    }

if(min==bcg){
    cout<<"BCG ";
}
else if(min==bgc){
    cout<<"BGC ";
}
else if(min==cbg){
    cout<<"CBG ";
}
else if(min==cgb){
    cout<<"CGB ";
}
else if(min==gbc){
    cout<<"GBC ";
}
else if(min==gcb){
    cout<<"GCB ";
}
cout<<min<<endl;
break;
    }
return 0;
}
