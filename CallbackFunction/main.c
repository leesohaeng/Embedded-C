#include <stdio.h>
#include <stdlib.h>

// Callback Function ; 함수를 인수로 갖는 함수 ; 단 함수의 인수를 같이 사용하지 않는다.
int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }

int (*pa[3])( ) = {add, sub, mul};  // 함수의 포인터를 담는 배열. 배열요소는 함수의 이름(함수의 주소)

// compute 함수 설계
int ( *compute( int(*op)() ) )()  // int를 return하는 함수의 포인터를 받고, int를 return하는 함수의 포인터를 리턴.
{
	int x=op();
	x = x%3;
	return pa[x];	
}

int main (int argc, const char * argv[]) {
	int i;

	for(i=0; i<10; i++)
	{
		printf("    %d\n", compute(rand)(3,4)); // rand 함수를 사용하였으나 인수를 포함하지 않는다. rand()
	}
    return 0;
}
