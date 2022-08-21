#include <stdio.h>
typedef unsigned int UI;

int main (int argc, const char * argv[]) {
    // insert code here...
	
	float a = 3.25;
	double b = 3.25;
	
	printf("**%d**\n",sizeof(float));
    printf("%X = %f\n",*(UI *)&a,a);
    printf("%X:%X = %f\n",*((UI *)&b+1),*(UI *)&b,b);
    return 0;
}
