#include <stdio.h>

	char a[] = "motel";
	char *p = "motel";

int main (int argc, const char * argv[]) {
    // insert code here...
	
	unsigned int i= -100;
	
	a[0] = 'h';

    printf("%s %s %d\n",a,p,i);
    return 0;
}
