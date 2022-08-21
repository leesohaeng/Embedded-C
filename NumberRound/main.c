#include <stdio.h>

int convert_int(double a);

int convert_int(double a)
{
	if( (a-(int)a)>=0.5 ) return (int)(a+1);
	else				  return (int)a;
}

int main (int argc, const char * argv[]) {
	double d;
	
	d = 123.55;
	printf("%d\n",convert_int(d));
    return 0;
}
