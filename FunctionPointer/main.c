#include <stdio.h>

int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }
int sqr(int a){	return a*a; }

int (*pa[4])( ) = {add, sub, mul, sqr}; // 함수의 주소를 요소로 갖는 배열 ; 오직 C만 가능

int ( *compute(int op) ) ()  // Compute는 int op를 요소로 갖고 int *를 리턴하는 함수
{
	return pa[op];
}

int main (int argc, const char * argv[]) {
	printf("%d\n", compute(0)(3,4));
	printf("%d\n", compute(1)(3,4));
	printf("%d\n", compute(2)(3,4));
	printf("%d\n", compute(3)(3));
    return 0;
}