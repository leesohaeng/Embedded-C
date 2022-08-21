#include <stdio.h>

void func(int a);
void func(int a)
{
	a;
}

int main (int argc, const char * argv[]) {
	int a[] = {0,1,2,3,4}; 
	int *p= {a,a+1,a+2,a+3,a+4};
	int **pp= p;
	int w,x,y,z=2;
	w=x=y=1;
	
	if( w=z--,x=z--,y=z--)
	{
		w--,x--,y--,z--;
		printf("%X\n",&a);
	printf("%X\n",a);
	printf("%X\n",&a[0]);
	
	}	
	pp++;

	printf("%d\n");

	printf("%d;%d;%d;%d\n",w,x,y,z);
    return 0;
}
