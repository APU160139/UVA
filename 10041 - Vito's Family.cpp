#include<bits/stdc++.h>
using namespace std;
 int main(){
 int n,r,s[510],i,j,sum,k,median;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    scanf("%d",&r);
    for(j=0;j<r;j++){
        scanf("%d",&s[j]);
        }
        sort(s, s + r);
		median = s[r / 2];
		sum = 0;
		for (k = 0; k < r; k++) {
			sum += abs(median - s[k]);
		}
		printf("%d\n", sum);
 }
return 0;
}

