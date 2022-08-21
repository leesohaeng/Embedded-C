#include <stdio.h>

int *add(int *a,int *b)
{
	static int c[10];
	int i;
	
	for(i=0;i<10;i++) c[i] = a[i]+b[i];
	
	return c;
}

int main (int argc, const char * argv[]) {
    // insert code here...
	
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	int *c;
	int i;
	
	c = add(a,b);
	for(i=0;i<10;i++) 
		printf("%4d",c[i]);

    return 0;
}
