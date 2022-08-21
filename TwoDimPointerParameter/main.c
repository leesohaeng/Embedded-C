#include <stdio.h>

int sum( int (*p)[3] );

int sum( int (*p)[3] )
{
	int a,b,c=0;
	for(a=0;a<2;a++) {
		for(b=0;b<3;b++) {
			c += p[a][b];
		}
	}
	return c;
}

int main (int argc, const char * argv[]) {
	int a[2][3] = {1,2,3,4,5,6};

	printf("%d\n",sum(a));
    return 0;
}

21