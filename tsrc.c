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
// [1] : 무한확장형의 해석
// 다음 프로그램의 메모리 구성과 실행결과를 유추하시오
/***********************************************************/

/*
void main(void)
{
	int *(*a[4])(int *);
	int *(*(*p)[4])(int *);

	printf("%d\n", sizeof (a));
	printf("%d\n", sizeof (p));
}
*/

/***********************************************************/
// [2] : 배열의 초기화
// 다음에서 경고 혹은 에러인곳을 모두 고르시오
// 컴파일러에 따라서 조금씩 다른부분이 있음
/***********************************************************/

/*
void main(void)
{
	int a[ ] = {1,2,3,4};
	int b[4] = {1,2,3};
	int c[3] = {1,2,3,4};
	char d[ ] = "ABC";	
	char e[4] = "ABC";	
	char f[3] = "ABC";	
	char g[2] = "ABC";	
	
	printf("%d\n", a[0]);
	printf("%d\n", b[3]);
	printf("%X\n", d[0]);
	printf("%X\n", e[3]);
	printf("%X\n", f[3]);
	printf("%s\n", d);
	printf("%s\n", e);
	printf("%s\n", f);
}
*/

/***********************************************************/
// [3] : 배열 기호에 대한 오해
// 다음에서 경고 혹은 에러인곳을 모두 고르시오
// 실행결과를 예측하시오
/***********************************************************/

/*
void main(void)
{
	int a[4] = {1,2,3,4};
	
	printf("%d\n", a[0]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);
	printf("%d\n", a[-1]);
}
*/

/***********************************************************/
// [4] : 1차원 배열의 이해
// 다음 실행결과를 예측하시오
/***********************************************************/

/*
void main(void)
{
	int a[4] = {1,2,3,4};
	
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);

	printf("%X\n", &a[0]);
	printf("%X\n", &a[1]);

	printf("%X\n", a);
	printf("%d\n", *a);

	printf("%X\n", a+1);
	printf("%d\n", *(a+1));

	printf("%X\n", a+2);
	printf("%d\n", *(a+2));

	printf("%d\n", *a+1);
	printf("%d\n", *a+2);
}
*/

/***********************************************************/
// [5] : 1차원 배열의 등가포인터
// 다음 실행결과를 예측하시오
/***********************************************************/

/*
void main(void)
{
	int a[4] = {1,2,3,4};
	int *p;

	p = a;

	printf("%X\n", &p);

	printf("%X\n", p);
	printf("%X\n", a);

	printf("%d\n", *p);
	printf("%d\n", p[0]);

	printf("%d\n", *(p+1));
	printf("%d\n", p[1]);
}
*/

/***********************************************************/
// [6] : C언어의 주소
// 다음 실행결과를 예측하시오
/***********************************************************/
/*

void main(void)
{
	char a[4] = "LEW";
	char *p = a;

	printf("%X:%X \n", p, &p);
	printf("%X:%X \n", a, &a);
	printf("%X:%X \n", main, &main);
	printf("%X:%X \n", "LEW", &"LEW");
}

*/
/***********************************************************/
// [7] : 문자열의 이해
// 경고, 에러가 발생하는가? 
// 다음 실행결과를 예측하시오
/***********************************************************/
/*
void main(void)
{
	char a[4] = "LEW";

	printf("%X	%X \n", a, &a);
	printf("%X	%X \n", "LEW", &"LEW");
	printf("%c	%c\n", a[0], a[1]);
	printf("%c	%c\n", "LEW"[0], "LEW"[1]);
	printf("%c	%X \n", *a, a+1);
	printf("%c	%X \n", *"LEW", "LEW"+1);
}

*/
/***********************************************************/
// [8] : 모텔 증축 공사
// 경고, 에러가 발생하는가? 
// 다음 실행결과를 예측하시오
// PC와 임베디드 환경에서 다른 결과가 나올수 있을까?
/***********************************************************/

/*
void main(void)
{
	char a[ ] = "Motel";
	char *p   = "Motel";

	a[0] = 'H';
	p[0] = 'H';

	printf("%s\n", a);
	printf("%s\n", p);
}

*/
/***********************************************************/
// [9] : %s 옵션과 문자열의 이해
// 경고, 에러가 발생하는가? 
// 다음 실행결과를 예측하시오
/***********************************************************/

/*
void main(void)
{
	char a[ ] = "LEW";
	char *p = "%s\n";

	printf("%s\n", a);
	printf("%s\n", *a);
	printf(p, a);
}

*/
/***********************************************************/
// [10] : 2차원배열의 이해
// 다음 실행결과를 예측하시오
// a[0], a[1], a[2]는 정체가 무엇인가?
/***********************************************************/

/*
char a[3][4] = {"kim","lew","seo"};

void main(void)
{
	printf("%d\n",a);
	printf("%d\n",*a);
	printf("%d\n",a[0]);
	printf("%c\n",*a[0]);
	printf("%d\n",a[1]);
	printf("%c\n",*a[1]);
	printf("%d\n",a[2]);
	printf("%c\n",*a[2]);
	printf("%s\n",a[2]+1);

}

*/
/***********************************************************/
// [11] : 등가포인터의 활용
// 다음 실행결과를 예측하시오
/***********************************************************/

/*
void main(void)
{
	char arr[5][10] = {"Kim", "Lew", "Kang", "Song", "Park"};
	char (*p)[10];

	p = arr;

	printf("%s\n", p);
	
	printf("%s\n", *p);
	printf("%s\n", *(p+1));
	printf("%c\n", *(*(p+2)+1));

	printf("%s\n", p[0]);
	printf("%s\n", p[1]);
	printf("%c\n", p[2][1]);
}
*/

/***********************************************************/
// [12] : 등가포인터의 활용연습 
// 다음 실행결과를 예측하시오
// 주어진 내용이 인쇄되도록 밑줄에 적절한 수식을 작성하시오
/***********************************************************/

/*
int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int (*ptr)[4] = a; 
int *pa[3] = {a[0], a[1], a[2]};
int *p = a[0];

void main(void)
{
	printf("%d\n",p[7]);
	printf("%d\n",pa[2][3]);
	printf("%d\n",ptr[2][1]);
}
*/

/***********************************************************/
// [13] : 포인터 억세스 연습 
// 다음 실행결과를 메모리 분석법을 이용하여 예측하시오
/***********************************************************/

/* 
char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};
char **cp[] = {c+3, c+2, c+1, c};
char ***cpp = cp;

void main(void)
{
	printf("%s", **++cpp);
	printf("%s ", *--*++cpp+3);
	printf("%s", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
}
*/


/***********************************************************/
// [14] : switch에 의한 다중분기
// 다음 프로그램에서 조건이 많아질 경우 문제점은?
/***********************************************************/

/*
int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }

int compute(int op, int a, int b)
{
	switch(op)
	{
		case 0	: return add(a,b);
		case 1	: return sub(a,b);
		default	: return mul(a,b);
	}
}

void main(void)
{
	printf("%d\n", compute(0,3,4));
	printf("%d\n", compute(1,3,4));
	printf("%d\n", compute(2,3,4));
}
*/

/***********************************************************/
//  [15] : 함수 포인터를 이용한 함수 호출로 변경하시오
// compute 함수를 새로이 설계하시오
// 위의 방법보다 장점은 무엇인가?
/***********************************************************/

/*
int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }




int compute(int op, int a, int b)
{


}

void main(void)
{
	printf("%d\n", compute(0,3,4));
	printf("%d\n", compute(1,3,4));
	printf("%d\n", compute(2,3,4));
}

*/

/***********************************************************/
//  [16] : 함수 포인터 확장문제
// 함수의 번호를 받아서 해당 함수를 리턴하는 
// compute 함수의 프로토타입을 완성하시오
/***********************************************************/

/*
int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }
int sqr(int a){	return a*a; }

int (*pa[4])( ) = {add, sub, mul, sqr};

int (* compute (int op)) ()
{
	return pa[op];
}

void main(void)
{
	printf("%d\n", compute(0)(3,4));
	printf("%d\n", compute(1)(3,4));
	printf("%d\n", compute(2)(3,4));
	printf("%d\n", compute(3)(3));
}

*/
/***********************************************************/
//  [17] : 함수를 받고 함수를 리턴하는 함수
// main함수가 다음과 같이 변경된 경우
// compute 함수를 새로이 설계하시오
// main에서 rand함수를 compute에 넘기면
// compute 함수는 rand()를 실행하여 결과를 3으로 나눠서 
// 나머지가 0이면 add(), 1이면 sub(), 2이면 mult()를 리턴한다. 
// main은 넘겨받은 함수를 이용하여 연산을 수행한다. 
// 프로그램을 여러번 수행하여 나오는 결과를 확인하시오
/***********************************************************/
/*
#include <stdlib.h>

int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }

int (*pa[3])( ) = {add, sub, mul};  // 함수의 포인터를 담는 배열. 배열요소는 함수의 이름(함수의 주소)

// compute 함수 설계
int (*compute(  int (*op)()   ))()  // int를 return하는 함수의 포인터를 받고, int를 return하는 함수의 포인터를 리턴.
{
	int x=op();
	x = x%3;
	return pa[x];	
}

void main(void)
{
	int i;

	for(i=0; i<10; i++)
	{
		printf("    %d\n", compute(rand)(3,4));
	}
}
*/

/***********************************************************/
//  [18] : typedef의 사용
// 위의 compute 함수를 typedef를 사용하여 간략화 시키시오
// 함수포인터의 새로운 타입인 FPtr을 typedef로 선언하시오
/***********************************************************/

/*
#include <stdlib.h>

// FPtr 선언 

typedef int (* FPtr)();  // typedef를 뺐을때 변수선언과 동일해야 한다.

int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }

FPtr pa[3] = {add, sub, mul};

FPtr	compute(FPtr op)
{
	return pa[op( ) % 2];
}

void main(void)
{
	int i;

	for(i=0; i<10; i++)
	{
		printf("    %d\n", compute(rand)(3,4));
	}
}
*/

/***********************************************************/
// [함수포인터 활용예제] : Sort and Search
// 다음 프로그램을 분석하시오
/***********************************************************/

// 사용된 라이브러리 함수는 다음과 같다
// void qsort( void *base, size_t num, size_t width, 
//                    int (__cdecl *compare )(const void *elem1, const void *elem2 ) );  
//__cdecl : 스택에 인수를 저장하는 순서를 오른쪽에서 왼쪽으로 한다.

// void *bsearch( const void *key, const void *base, 
//                           size_t num, size_t width, 
//                           int ( *compare ) ( const void *elem1, const void *elem2 ) );
// bsearch의 compare 함수는 반드시 오름차순 정렬일것

#include <stdlib.h>

struct _st
{
	int num;
	char *name;
}book[10] = {{7, "Kim"},	 {2, "Lew"}, 	 {10, "Kang"},
 		    {3, "Lee"},	 {6, "Seo"},	 {1, "Song"},
		    {5, "Ki"},	 {8, "Moon"}, 	 {9, "Park"},
		    {4, "Jung"}};

int compare_num_up(const void * a1, const void * a2);

void main(void)
{
	int i; struct _st *p;

	for(i=0; i<10; i++)
	{
		printf("%-2d : %s\n", book[i].num, book[i].name);
	}
	printf("\n");

	qsort(book, 10, sizeof(struct _st), compare_num_up);

	for(i=0; i<10; i++)
	{
		printf("%-2d : %s\n", book[i].num, book[i].name);
	}

	i = 6;
	p= bsearch(&i, book, 10, sizeof(struct _st), compare_num_up);
	printf("[Search] %d : %s\n", p->num, p->name);
}

int compare_num_up(const void * a1, const void * a2)  //넘어오는 타입을 모르기 때문에 구조체포인터로 케스팅해야한다.
{
	if(((struct _st *)a1)->num > ((struct _st *)a2)->num) return 1;  //괄호에 주의할것.  ((struct _st *)a1)->num
	else if(((struct _st *)a1)->num < ((struct _st *)a2)->num) return -1;
	else return 0;
}


/***********************************************************/
//  [19] : 주소의 뺄셈 연산
// 다음 프로그램의 결과를 예측하시오
// 경고가 발생하는 곳을 지적하고 경고 발생 이유를 말하시오
/***********************************************************/

/* 
int a[] = {0,1,2,3,4};
int *p[] = {a,a+1,a+2,a+3,a+4};
int **pp = p;

void main(void)
{
	printf("%d\t%d\n", a, *a);
	printf("%d\t%d\t%d\n", p, *p, **p);
	printf("%d\t%d\t%d\n", pp, *pp, **pp);

	pp++;
	printf("%d\t%d\t%d\n", pp-p, *pp-a, **pp);

	*pp++;
	printf("%d\t%d\t%d\n", pp-p, *pp-a, **pp);
	*++pp;
	printf("%d\t%d\t%d\n", pp-p, *pp-a, **pp);
	++*pp;
	printf("%d\t%d\t%d\n", pp-p, *pp-a, **pp);

	pp=p;
	**pp++;
	printf("%d\t%d\t%d\n", pp-p, *pp-a, **pp);
	*++*pp;
	printf("%d\t%d\t%d\n", pp-p, *pp-a, **pp);
	++**pp;
	printf("%d\t%d\t%d\n", pp-p, *pp-a, **pp);
}
*/

/***********************************************************/
//  [20] : 문자열 복사 1
// 다음 프로그램의 결과를 예측하시오
// from과 to의 type은 무엇인가?
/***********************************************************/

/*
void scpy1(char from[], char to[]);

char astr[ ] = "ABC";

void main(void)
{
	char bstr[4] = {1,2,3,4};

	scpy1(astr, bstr);
	printf("%s   %s\n",astr, bstr);
}

void scpy1(char from[], char to[])
{
	int i = 0;
	while(from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}
*/

/***********************************************************/
//  [21] : 문자열 복사 2
// 다음 프로그램의 결과를 예측하시오
/***********************************************************/

/*
void scpy1(char from[], char to[]);

char astr[ ] = "ABC";

void main(void)
{
	char bstr[4] = {1,2,3,4};

	scpy1(astr, bstr);
	printf("%s   %s\n",astr, bstr);
}

void scpy1(char *from, char *to)
{
	for( ;*to++ = *from++; );
}
*/

/***********************************************************/
//  [22] : 문자열 연결
// 다음 프로그램의 결과를 예측하시오
/***********************************************************/

/*
char * s_add(char * str1, char * str2);

void main(void)
{
	char astr[20] = "Keyseek"; 
	char bstr[ ] = " Lew";

	printf("%s\n",s_add(astr, bstr));
}

char * s_add(char * str1, char * str2)
{
	unsigned char * str_ptr;

	str_ptr = str1;
	while(*str1++);

	for(--str1; *str1++ = *str2++;  );
	return str_ptr;
}
*/

/***********************************************************/
// [23] : 문자열 길이 측정
// 다음 프로그램의 결과를 예측하시오
/***********************************************************/

/*
int sleng(char * str);

void main(void)
{
	char astr[50] = "Keyseek Lew"; 
	
	printf("Stirng length is: %d\n", sleng(astr));
}

int sleng(char * str)
{
	if(*str)
		return (sleng(++str) + 1);
	else
		return (0);
}
*/