/*===== << �� �κ��� �ǽ��� ���Ͽ� ���� ���� >> =====*/
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

/*===== << ������� ����� ���α׷��� �ۼ��� >> =====*/

/***********************************************************/
// [1] : ����Ȯ������ �ؼ�
// ���� ���α׷��� �޸� ������ �������� �����Ͻÿ�
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
// [2] : �迭�� �ʱ�ȭ
// �������� ��� Ȥ�� �����ΰ��� ��� ���ÿ�
// �����Ϸ��� ���� ���ݾ� �ٸ��κ��� ����
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
// [3] : �迭 ��ȣ�� ���� ����
// �������� ��� Ȥ�� �����ΰ��� ��� ���ÿ�
// �������� �����Ͻÿ�
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
// [4] : 1���� �迭�� ����
// ���� �������� �����Ͻÿ�
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
// [5] : 1���� �迭�� �������
// ���� �������� �����Ͻÿ�
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
// [6] : C����� �ּ�
// ���� �������� �����Ͻÿ�
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
// [7] : ���ڿ��� ����
// ���, ������ �߻��ϴ°�? 
// ���� �������� �����Ͻÿ�
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
// [8] : ���� ���� ����
// ���, ������ �߻��ϴ°�? 
// ���� �������� �����Ͻÿ�
// PC�� �Ӻ���� ȯ�濡�� �ٸ� ����� ���ü� ������?
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
// [9] : %s �ɼǰ� ���ڿ��� ����
// ���, ������ �߻��ϴ°�? 
// ���� �������� �����Ͻÿ�
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
// [10] : 2�����迭�� ����
// ���� �������� �����Ͻÿ�
// a[0], a[1], a[2]�� ��ü�� �����ΰ�?
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
// [11] : ��������� Ȱ��
// ���� �������� �����Ͻÿ�
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
// [12] : ��������� Ȱ�뿬�� 
// ���� �������� �����Ͻÿ�
// �־��� ������ �μ�ǵ��� ���ٿ� ������ ������ �ۼ��Ͻÿ�
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
// [13] : ������ �＼�� ���� 
// ���� �������� �޸� �м����� �̿��Ͽ� �����Ͻÿ�
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
// [14] : switch�� ���� ���ߺб�
// ���� ���α׷����� ������ ������ ��� ��������?
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
//  [15] : �Լ� �����͸� �̿��� �Լ� ȣ��� �����Ͻÿ�
// compute �Լ��� ������ �����Ͻÿ�
// ���� ������� ������ �����ΰ�?
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
//  [16] : �Լ� ������ Ȯ�幮��
// �Լ��� ��ȣ�� �޾Ƽ� �ش� �Լ��� �����ϴ� 
// compute �Լ��� ������Ÿ���� �ϼ��Ͻÿ�
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
//  [17] : �Լ��� �ް� �Լ��� �����ϴ� �Լ�
// main�Լ��� ������ ���� ����� ���
// compute �Լ��� ������ �����Ͻÿ�
// main���� rand�Լ��� compute�� �ѱ��
// compute �Լ��� rand()�� �����Ͽ� ����� 3���� ������ 
// �������� 0�̸� add(), 1�̸� sub(), 2�̸� mult()�� �����Ѵ�. 
// main�� �Ѱܹ��� �Լ��� �̿��Ͽ� ������ �����Ѵ�. 
// ���α׷��� ������ �����Ͽ� ������ ����� Ȯ���Ͻÿ�
/***********************************************************/
/*
#include <stdlib.h>

int add(int a, int b){	return a+b; }
int sub(int a, int b){	return a-b; }
int mul(int a, int b){	return a*b; }

int (*pa[3])( ) = {add, sub, mul};  // �Լ��� �����͸� ��� �迭. �迭��Ҵ� �Լ��� �̸�(�Լ��� �ּ�)

// compute �Լ� ����
int (*compute(  int (*op)()   ))()  // int�� return�ϴ� �Լ��� �����͸� �ް�, int�� return�ϴ� �Լ��� �����͸� ����.
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
//  [18] : typedef�� ���
// ���� compute �Լ��� typedef�� ����Ͽ� ����ȭ ��Ű�ÿ�
// �Լ��������� ���ο� Ÿ���� FPtr�� typedef�� �����Ͻÿ�
/***********************************************************/

/*
#include <stdlib.h>

// FPtr ���� 

typedef int (* FPtr)();  // typedef�� ������ ��������� �����ؾ� �Ѵ�.

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
// [�Լ������� Ȱ�뿹��] : Sort and Search
// ���� ���α׷��� �м��Ͻÿ�
/***********************************************************/

// ���� ���̺귯�� �Լ��� ������ ����
// void qsort( void *base, size_t num, size_t width, 
//                    int (__cdecl *compare )(const void *elem1, const void *elem2 ) );  
//__cdecl : ���ÿ� �μ��� �����ϴ� ������ �����ʿ��� �������� �Ѵ�.

// void *bsearch( const void *key, const void *base, 
//                           size_t num, size_t width, 
//                           int ( *compare ) ( const void *elem1, const void *elem2 ) );
// bsearch�� compare �Լ��� �ݵ�� �������� �����ϰ�

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

int compare_num_up(const void * a1, const void * a2)  //�Ѿ���� Ÿ���� �𸣱� ������ ����ü�����ͷ� �ɽ����ؾ��Ѵ�.
{
	if(((struct _st *)a1)->num > ((struct _st *)a2)->num) return 1;  //��ȣ�� �����Ұ�.  ((struct _st *)a1)->num
	else if(((struct _st *)a1)->num < ((struct _st *)a2)->num) return -1;
	else return 0;
}


/***********************************************************/
//  [19] : �ּ��� ���� ����
// ���� ���α׷��� ����� �����Ͻÿ�
// ��� �߻��ϴ� ���� �����ϰ� ��� �߻� ������ ���Ͻÿ�
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
//  [20] : ���ڿ� ���� 1
// ���� ���α׷��� ����� �����Ͻÿ�
// from�� to�� type�� �����ΰ�?
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
//  [21] : ���ڿ� ���� 2
// ���� ���α׷��� ����� �����Ͻÿ�
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
//  [22] : ���ڿ� ����
// ���� ���α׷��� ����� �����Ͻÿ�
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
// [23] : ���ڿ� ���� ����
// ���� ���α׷��� ����� �����Ͻÿ�
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