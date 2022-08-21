#include <stdio.h>

int main (int argc, const char * argv[]) {

	// a는 int pointer를 받고(function), int pointer를 return하는 
	// 함수의 주소 4개를 갖는 배열. p109참조.
	int	*(*a[4])(int *);     
	// p는 int pointer를 받고(function), int pointer를 return하는
	// 함수의 주소 4개를 갖는 포인터. ??
	int *(*(*p)[4])(int *);
	
	
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(p));

    return 0;
}
