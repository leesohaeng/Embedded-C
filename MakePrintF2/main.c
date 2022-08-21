#include <stdio.h>
struct _st
{
		char c[3];
};

int add(int a, int b)
{
	return a + b;
}

void my_test(int a1, ...)
{
	printf("1st = %X : %d\n\n", &a1, a1);

	printf("2nd = %X : %X\n", (&a1+1), (&a1)[1]);
	printf("2nd = %s\n\n", (&a1)[1]);

	// 나머지 요소를 억세스 하도록 프로그램을 완성하시오
	printf("2nd = %X : %X\n", (&a1+2), (&a1)[2]);
	printf("2nd = %c\n\n", (&a1)[2]);

	printf("2nd = %X : %X\n", (&a1+3), (&a1)[3]);
	printf("2nd = %c\n\n", (&a1)[3]);
	
	printf("2nd = %X : %.f\n", (&a1+4), *(double*)(&a1+4));
	printf("2nd = %.f\n\n", (double)(&a1)[4]);
	
	printf("2nd = %X : %X\n", (&a1+6), (&a1)[6]);
	printf("2nd = %X\n\n", (&a1)[6]);
	
	printf("2nd = %X : %X\n", (&a1+6), (&a1)[6]);
//	printf("2nd = %c:%c:%c\n\n", *(&a1)[6],*(&a1)[6],*(&a1)[6]);
	/*
	printf("2nd = %X : %X\n", (&a1+1), (&a1)[1]);
	printf("2nd = %X : %X\n", (&a1+1), (&a1)[1]);
	printf("2nd = %X : %X\n", (&a1+1), (&a1)[1]);
*/
}

int main (int argc, const char * argv[]) {
	char a = 'B';
	struct _st x={{'D','E','F'}};
	char d[ ] = "kim";

	my_test(7, "Keyseek", 'A', a, 3.14, 0xaa, x, 10, d, add);
    return 0;
}
