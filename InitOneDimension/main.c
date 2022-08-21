#include <stdio.h>

int main (int argc, const char * argv[]) {
	int	a[4] = {10,20,30,40};

	printf("%d\n",a[0]);

	// 배열의 요소는 range를 검사하지 않는다. 아래는 모두 error없이 처리됨.
	printf("%d\n",0[a]);
	printf("%d\n",1[a]);
	printf("%d\n",2[a]);


    return 0;
}
