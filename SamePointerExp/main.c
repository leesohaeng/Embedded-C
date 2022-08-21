#include <stdio.h>

int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int (*ptr)[4] = a;  // 왜냐하면 2중 포인터니까...
int *pa[3] = {a[0],a[1],a[2]};
int *p = a[0];

int main (int argc, const char * argv[]) {

	printf("%d\n", p[7]);
	printf("%d\n", pa[2][3]);
	printf("%d\n", ptr[2][1]);
	
    return 0;
}
