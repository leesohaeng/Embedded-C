#include <stdio.h>
int c=sizeof(int);
int main (int argc, const char * argv[]) {
    // insert code here...
	int b=c;
	int c=c*2;
	static int s=b;
    printf("%d\n",c);
    return 0;
}
