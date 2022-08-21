#include <stdio.h>

int main (int argc, const char * argv[]) {
    // insert code here...
	signed char x=0xff;
	
	if( x==0xff )
	printf("T%x\n",x-1);
	else printf("F%x\n",x+1);
    printf("Hello, World!\n");
    return 0;
}
