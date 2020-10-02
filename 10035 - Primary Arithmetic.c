#include <stdio.h>
int main(){
	int n1, n2, cnt, carry;
	while(1){
		cnt = 0;
		carry = 0;
		scanf("%d%d", &n1, &n2);
		if(n1 == 0 && n2 == 0){
          break;
		}
		while(n1 != 0 || n2 != 0){
			if((n1 % 10) + (n2 % 10) + carry >= 10){
                cnt++;
                carry = 1;
			}

			else{
              carry = 0;
			}
			n1 =n1/10;
			n2 =n2/ 10;
		}
		if(cnt == 0)
			printf("No carry operation.\n");
		else if(cnt == 1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n", cnt);
	}

	return 0;
}
