#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// FPtr 선언 

typedef int (* FPtr)();  // 선언할때 typedef를 뺐을때 변수선언과 동일해야 한다.   int (*FPtr)(); 
// FPtr을 int (*)();형으로 선언한다.

int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }

FPtr pa[3] = {add, sub, mul};

FPtr	compute(FPtr op)  // callback function
{
	int rnd = op(); 
	printf("%3d ; ",rnd%3);
	return pa[rnd % 3];
}

int main (int argc, const char * argv[]) {
	int i;
	time_t t;

	srand((unsigned)time(&t));

	for(i=0;i<3;i++) printf("%x\n",pa[i]);

	for(i=0; i<10; i++)
	{
		printf("    %d\n", compute(rand)(3,4));
	}
    return 0;
}
