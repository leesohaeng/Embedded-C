#include <stdio.h>

int main (int argc, const char * argv[]) {
    // insert code here...
	int a[4] = {1,2,3,4};
	int x=-1;
	
	// -1이 더 큰 이유는 sizeof연산자가 항상 unsigned형 이므로
	// -1은 unsigned형으로 형 변환 된다.
	// -1은 unsigned형으로 값이 변환되면 0xffffffff
	
	if( x < sizeof(a) ) printf("%d\n",a[0]);
	else				 printf("%d\n",a[1]);

    return 0;
}

