#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c,cons= ' ';
    bool first=1,found;
    char vowel[]= {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    string END = "ay";
    int i;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            if (first) {
                found =0;
                for(i=0;i<10;i++){
                    if (vowel[i] == c) {
                        found=1;
                        break;
                    }
                }

                if (!found) {
                    cons=c;
                } else {
                    cons=' ';
                    cout << c;
                }
                first=0;
            } else {
                cout << c;
            }
        }
        else {
            if (!first) {
                if (cons!= ' ')
                    cout<<cons;

                cons=' ';
                cout<<END;
            }
            first = true;
            cout << c;
        }
    }
    return 0;
}
