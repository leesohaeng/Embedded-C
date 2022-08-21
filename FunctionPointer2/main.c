#include <stdio.h>


int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int compute(int op, int a, int b);

int	(*p)();   // 함수의 주소를 전달받기 위한 선언
int (*pa[3])() = {add,sub,mul};  // 함수의 주소를 3개의 배열에 입력 

int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int compute(int op, int a, int b)
{
	p = pa[op];
	return p(a,b);
}
int main (int argc, const char * argv[]) {
	int (*p)(int x,int y);
	
	p = add;
	printf("%d\n",p(3,4));
   
	printf("%d\n",compute(1,7,6));
   
	return 0;
}
