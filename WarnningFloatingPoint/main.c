#include <stdio.h>

typedef unsigned int UI;

int main (int argc, const char * argv[]) {
	float a = 3.25;
	double b = 3.25;

	printf("%x ; %x= %f\n",*(UI *)&a,&a,a);
	printf("%08x:%08x = %f\n",*((UI *)&b+1),*(UI *)&b,b);
    return 0;
}
