#include <stdio.h>

void my_ellipsis(int a1, ...)
{
	printf("%d\t", *(int *)(&a1+0) );   // (&a1)[0]
	printf("%X\t", *(char *)(&a1+1) );  // (&a1)[1]
	printf("%c\t", *(char *)(&a1+2) );
	printf("%.10f\t", *(double *)(&a1+3) );
	printf("%.10f\t", *(double *)(&a1+5) );

}

int main (int argc, const char * argv[]) {
	int a=10;
	char b=0xff;
	char b2 = 'A';
	float c=3.14;
	double d=5.125;

	my_ellipsis(a,b,b2,c,d);
    return 0;
}
