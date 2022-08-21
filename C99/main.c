#include <stdio.h>


int add(int a,int b);
int add(int a,int b)
{
	return a+b;
}

int main (int argc, const char * argv[]) {
	int (*A)();
	A = add;
	printf("%d\n",A(1,2));
    return 0;
}
