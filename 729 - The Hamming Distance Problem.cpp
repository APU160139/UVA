#include<bits/stdc++.h>
using namespace std;
int main() {
    int T, N, H,i;
    string s;
    scanf("%d",&T);
    while(T--) {
        scanf("%d %d", &N, &H);
        s = "";
        for(i = 0; i < N; i++) {
            if(i < N - H)
                s = s + "0";
            else
                s = s + "1";
        }
        do {
            cout << s << endl;
        }
        while(next_permutation(s.begin(), s.end()));
        if(T){
           printf("\n");
        }

    }
    return 0;
}
