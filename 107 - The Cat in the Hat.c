#include <stdio.h>
#include <math.h>
int h, w;
void
calc(void)
{
	int N,a;
	double f,g;
	double dist = 1000000.0;
	int i,n;

	if (w==1 && h==1) {
		printf("0 1\n");
		return;
	}

	f = log(w)/log(h);
	for(N=1; ; N++) {
		double t;
		g = log(N)/log(N+1);

		t = fabs(f-g);
		if (t < dist) {
			dist = t;
		} else {
			N--;
			break;
		}
	}
	a = log(h) / log(N+1) + 0.3;

	printf(" value== N=%d, a=%d\n", N, a);

	n=0;
	for (i=0; i<a; i++) {
		n *= N;
		n++;
	}
	printf("%u %u\n",n,h*(N+1)-N*w);
}

int
main(void)
{
	while(1) {
		if (scanf("%d %d", &h, &w)!=2) {
			return 1;
		}
		if (h==0 && w==0) {
			return 0;
		}
		calc();
	}
	return 0;
}
