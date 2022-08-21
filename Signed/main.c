#include <stdio.h>

int main (int argc, const char * argv[]) {
	int sx=-8;
	unsigned ux = -8;

	printf("%d:%d\n",sx,ux);

	sx = 0xc0000003;
	ux = 0xc0000003;
	printf("%X:%X\n",sx<<3,ux<<3);

    return 0;
}
