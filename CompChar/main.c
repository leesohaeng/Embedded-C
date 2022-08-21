#include <stdio.h>

int main (int argc, const char * argv[]) {
	char	i =255;
	char	*p=&i;
	char	a=-1;
	
	// 주소는 unsigned int형으로 변환되어 비교되므로 -1은 0xffffffff
	// 결과는 거짓
	if(p > a) (*p)++;
	else	   (*p)--;
	
	printf("%X\n",*p);
    return 0;
}
