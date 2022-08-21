#include <stdio.h>

struct st {
	int  a;
	char b;
}x={10,'k'};

int sum(int (*f)[3]);
int sum(int (*f)[3])
{
	return f[0][2];
}

int main (int argc, const char * argv[]) {
    // insert code here...
	int a[4] = {10,20,30,40};
	int (*p)[4] = {a,a+1,a+2,a+3};
	struct st *P = &x;
	int b[2][3] = {1,2,3,4,5,6};
	
    printf("%X:%X\n",a,&a);
	(*p)[1] = 33;
	printf("@@%d\n",(*p)[1]);

	(*P).b = 'L';

	printf("%c\n",(*P).b);

	printf("%d\n",sum(b));
    return 0;
}
