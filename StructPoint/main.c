#include <stdio.h>

struct st {
	int  a;
	char b;
}x={10,'X'};

int main (int argc, const char * argv[]) {
	struct st *p = &x;

	(*p).b = 'L';
    return 0;
}
