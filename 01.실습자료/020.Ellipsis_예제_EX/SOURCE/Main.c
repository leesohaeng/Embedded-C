/*===== << 이 부분은 실습을 위하여 수정 금지 >> =====*/
#include "my_lib.h"
#define 	printf		Uart_Printf
#define 	main		User_Main
void User_Main(void);
void Main(void)
{
	Uart_Init(115200);	
	printf("\n=================================\n");
	main();
	printf("=================================\n");
}

/*===== << 여기부터 사용자 프로그램을 작성함 >> =====*/

/***********************************************************/
// [4-ANS] : ellipsis의 인수 전달
// 넘겨받는 인수를 인쇄하기 위한 my_ellipsis 함수를 완성하시오
// 들어오는 데이터의 순서는 이미 알고 있다고 가정한다.
// cahr, int, float, double, long double가 전달될 때 
// 실제 스택에는 어떻게 존재하는지를 분석하시오
/***********************************************************/

///*
void my_ellipsis(int a1, ...)
{
	printf("%X=%d\n", &a1, a1);	
	printf("%X=%X\n", &a1+1, (&a1)[1]);	
	printf("%X=%c\n", &a1+2, (&a1)[2]);	
	printf("%X=%f\n", &a1+3, *(double *)(&a1+3));	
	printf("%X=%f\n", &a1+5, *(double *)(&a1+5));	
}

void main(void)
{
	int a = 10; char b = 0xff; char b2 = 'A';
	float c = 3.14; double d = 5.125;
	
	my_ellipsis(a,b,b2,c,d);
}
//*/

/***********************************************************/
// [5-ANS] : format 지시자의 이용
// 제1인수에 뒤따르는 인수의 형식을 지시하는 문자열을 제공한다
// type은 u,d,c,f,s 4가지로 한다
// type 지시자는 모두 붙여서 사용한다고 하자
// 실제 스택에는 어떻게 존재하는지를 분석하시오
/***********************************************************/

/*
void my_ellipsis(char * fmt, ...)
{
	int * t = (int *)&fmt + 1;

	while(*fmt != '\0')
	{
		switch(*fmt++)
		{
			case 'u' : printf("%X\n", (unsigned int)(*t)); t++; break;	
			case 'd' : printf("%d\n", *t); t++; break;	
			case 'c' : printf("%c\n", *t); t++; break;	
			case 'f' : printf("%f\n", *(double *)t); t += 2; break;	
			case 's' : printf("%s\n", (char *)(*t)); t++; break;	
		}
	}
}

void main(void)
{
	int a = 10; char b = 0xff; char b2 = 'A';
	float c = 3.14; double d = 5.125;
	
	my_ellipsis("ducffs",a,b,b2,c,d,"Keyseek");
}
*/

/***********************************************************/
// [8-ANS] : stack acess
// 다음과 같이 가변인자로 전달된 내용을 인쇄하거나 
// 혹은 함수이면 실행하고 그 결과를 인쇄하도록 프로그램을 작성하라
/***********************************************************/

/*
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
	
	printf("3rd = %X : %X\n", (&a1+2), (&a1)[2]);
	printf("3rd = %c\n\n", (&a1)[2]);

	printf("4th = %X : %X\n", (&a1+3), (&a1)[3]);
	printf("4th = %c\n\n", (&a1)[3]);

	printf("5th = %X : %X\n", (&a1+4), (&a1)[4]);
	printf("5th = %X : %X\n", (&a1+5), (&a1)[5]);
	printf("5th = %g\n\n", *(double *)(&a1+4));	

	printf("6th = %X : %X\n", (&a1+6), (&a1)[6]);
	printf("6th = %X\n\n", (&a1)[6]);

	printf("7th = %X : %X\n", (&a1+7), (&a1)[7]);
	printf("7th = %X\n", (&a1)[7]);
	printf("x.c[0] = %c\n", ((struct _st  *)((&a1)+7))->c[0]);
	printf("x.c[0] = %c\n", ((struct _st  *)((&a1)+7))->c[1]);
	printf("x.c[0] = %c\n\n", ((struct _st  *)((&a1)+7))->c[2]);

	printf("8th = %X : %X\n", (&a1+8), (&a1)[8]);
	printf("8th = %d\n\n", (&a1)[8]);

	printf("9th = %X : %X\n", (&a1+9), (&a1)[9]);
	printf("d[0] = %c\n", ((char *)(&a1)[9])[0]);
	printf("d[1] = %c\n", ((char *)(&a1)[9])[1]);
	printf("d[2] = %c\n", ((char *)(&a1)[9])[2]);
	printf("d[2] = %d\n\n", ((char *)(&a1)[9])[3]);

	printf("10th = %X : %X\n", (&a1+10), (&a1)[10]);
	printf("add(3,4) = %d\n", ((int (*)( ))(&a1)[10])(3,4));
}

void main(void)
{
	char a = 'B';
	struct _st x={{'D','E','F'}};
	char d[ ] = "kim";

	my_test(7, "Keyseek", 'A', a, 3.14, 0xaa, x, 10, d, add);
}
*/
