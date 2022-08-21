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
// [1-1] : 리턴이 void인 함수
// 다음프로그램의 오류나 경고는? 실행된다면 결과는?
/***********************************************************/

/*
void func(int a)
{
	a;
}

void main(void)
{
	int a = func(3);
	printf("%d\n", a);
}
*/

/***********************************************************/
// [1-2] : printf()의 리턴?
// 다음프로그램의 오류나 경고는? 실행된다면 결과는?
/***********************************************************/

/*
void main(void)
{
	int a = printf("Hello!\n");
	int b = printf("%d\n", a);
	printf("%d\n", b);
}
*/

/***********************************************************/
// [2-1] : argument 전달 
// 함수 호출시 argument가 부족하거나 남는 경우에 대하여
// 에러 혹은 경고가 발생하는 곳을 지적하시오
/***********************************************************/

/*
int add(int a, int b)
{
	return a+b;
}

void main(void)
{
	printf("%d\n", add(3));
	printf("%d\n", add(3,4,5));
}
*/

/***********************************************************/
// [2-1] : argument 전달 
// printf()의 남거나 적은 argument 전달
// 다음 프로그램의 실행 결과는?
/***********************************************************/

/*
void main(void)
{
	int a = 1, b = 2, c = 3;

	printf("남는 Argument : %d %d \n", a, b, c);
	printf("적은 Argument : %d %d %d\n", a, b);
}
*/

/***********************************************************/
// [3] : 가변의 인수전달
// 다음과 같이 가변인자를 받는 my_add를 완성하시오
// 제1인수인 cnt는 뒤따르는 요소의 갯수를 지정한다
// 뛰따르는 인수는 모두 int로 들어간다고 가정한다
// argument가 전달될때 스택의 내용을 분석하시오
/***********************************************************/

/*
int my_add(int cnt, ...)
{
	int i, sum = 0;

	for(i = 1; i<= cnt; i++)
	{
		sum += (&cnt)[i];
	}
	return sum;
}

void main(void)
{
	printf("%d\n", my_add(3,7,5,4));
	printf("%d\n", my_add(5,1,2,6,9,10));
}
*/

/***********************************************************/
// [4-QUIZ] : ellipsis의 인수 전달
// 넘겨받는 인수를 인쇄하기 위한 my_ellipsis 함수를 완성하시오
// 들어오는 데이터의 순서는 이미 알고 있다고 가정한다.
// cahr, int, float, double, long double가 전달될 때 
// 실제 스택에는 어떻게 존재하는지를 분석하시오
/***********************************************************/

/*
void my_ellipsis(int a1, ...)
{



}

void main(void)
{
	int a = 10; char b = 0xff; char b2 = 'A';
	float c = 3.14; double d = 5.125;
	
	my_ellipsis(a,b,b2,c,d);
}
*/

/***********************************************************/
// [5-QUIZ] : format 지시자의 이용
// 제1인수에 뒤따르는 인수의 형식을 지시하는 문자열을 제공한다
// type은 u,d,c,f,s 4가지로 한다
// type 지시자는 모두 붙여서 사용한다고 하자
// 실제 스택에는 어떻게 존재하는지를 분석하시오
/***********************************************************/

/*
void my_ellipsis(char * fmt, ...)
{



}

void main(void)
{
	int a = 10; char b = 0xff; char b2 = 'A';
	float c = 3.14; double d = 5.125;
	
	my_ellipsis("ducffs",a,b,b2,c,d,"Keyseek");
}
*/

/***********************************************************/
// [6] : stdarg.h의 macro를 이용
// 다음을 보고 va_start, va_arg, va_end macro를 분석하시오
/***********************************************************/

/*
#include <stdarg.h>

void my_ellipsis(char * fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);

	while(*fmt != '\0')
	{
		switch(*fmt++)
		{
			case 'u' : printf("%X\n", va_arg(ap, unsigned int)); break;	
			case 'd' : printf("%d\n", va_arg(ap, int)); break;	
			case 'c' : printf("%c\n", va_arg(ap, int)); break;	
			case 'f' : printf("%f\n", va_arg(ap, double)); break;	
			case 's' : printf("%s\n", va_arg(ap, char *)); break;	
		}
	}

	va_end(ap);
}

void main(void)
{
	int a = 10; char b = 0xff; char b2 = 'A';
	float c = 3.14; double d = 5.125;
	
	my_ellipsis("ducffs",a,b,b2,c,d,"Keyseek");
}
*/

/***********************************************************/
// [7] : 표준함수인 vsprintf( )의 이용
// 위의 프로그램을 vsprintf( )를 이용하여 변경하시오
// 포맷지시어는 printf와 동일하게 취급한다
// 만약 시리얼포트등으로 인쇄하고자 한다면?
/***********************************************************/

/*
#include <stdarg.h>

void my_ellipsis(char * fmt, ...)
{
	va_list ap;
	char string[256];
	va_start(ap, fmt);
	vsprintf(string, fmt, ap);
	// 원하는 string 출력 함수를 여기에서 호출 
	Uart_Send_String(string);
	// printf(string);
	va_end(ap);
}

void main(void)
{
	int a = 10; char b = 0xff; char b2 = 'A';
	float c = 3.14; double d = 5.125;
	
	my_ellipsis("%d %X %c %f %f %s\n",a,b,b2,c,d,"Keyseek");
}
*/

/***********************************************************/
// [8-QUIZ] : stack acess
// 다음과 같이 가변인자로 전달된 내용을 인쇄하거나 
// 혹은 함수이면 실행하고 그 결과를 인쇄하도록 프로그램을 작성하라
/***********************************************************/


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
	

}

void main(void)
{
	char a = 'B';
	struct _st x={{'D','E','F'}};
	char d[ ] = "kim";

	my_test(7, "Keyseek", 'A', a, 3.14, 0xaa, x, 10, d, add);
}


/***********************************************************/
// [9-1] : __cdecl calling convention 
// 다음 두 프로그램을 각각 실행시켜보고 결과를 확인하라
// CW는 APCS를 따르며 다음은 실행이 되지 않음
// PC용 컴파일러에서 실험해 볼것
/***********************************************************/

/*
int __cdecl add(int a, int b)
{
	printf("%X : %X : %d\n", &a, &b, (&a)[2]);
	return a+b;
}

void main(void)
{
	printf("%d\n", add(3,4,5));
}
*/

/***********************************************************/
// [9-2] : __stdcall calling convention 
// 위의 프로그램과의 실행시 차이는 무엇인가?
// 문제가 발생하는 이유는 무엇인가?
// 두 프로그램을 disassembly하여 결과를 비교하여 보자
// CW는 APCS를 따르며 다음은 실행이 되지 않음
// PC용 컴파일러에서 실험해 볼것
/***********************************************************/

/*
int __stdcall add(int a, int b)
{
	printf("%X : %X : %d\n", &a, &b, (&a)[2]);
	return a+b;
}

void main(void)
{
	printf("%d\n", add(3,4,5));
}
*/

/***********************************************************/
// [10] : __fastcall calling convention 
// 위의 프로그램과의 실행시 차이는 무엇인가?
// 문제가 발생하는 이유는 무엇인가?
// 인수의 전달 순서는 어떻게 되는가?
// 왜 세번째 인자는 스택에 존재하지 않는가?
// CW는 APCS를 따르며 다음은 실행이 되지 않음
// PC용 컴파일러에서 실험해 볼것
/***********************************************************/

/*
int __fastcall add(int a, int b)
{
	printf("%X : %X : %d : %d\n", &a, &b, (&a)[-1], (&a)[-2]);
	return a+b;
}

void main(void)
{
	printf("%d\n", add(3,4,5));
}
*/
