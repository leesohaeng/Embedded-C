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
// [4-ANS] : ellipsis�� �μ� ����
// �Ѱܹ޴� �μ��� �μ��ϱ� ���� my_ellipsis �Լ��� �ϼ��Ͻÿ�
// ������ �������� ������ �̹� �˰� �ִٰ� �����Ѵ�.
// cahr, int, float, double, long double�� ���޵� �� 
// ���� ���ÿ��� ��� �����ϴ����� �м��Ͻÿ�
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
// [5-ANS] : format �������� �̿�
// ��1�μ��� �ڵ����� �μ��� ������ �����ϴ� ���ڿ��� �����Ѵ�
// type�� u,d,c,f,s 4������ �Ѵ�
// type �����ڴ� ��� �ٿ��� ����Ѵٰ� ����
// ���� ���ÿ��� ��� �����ϴ����� �м��Ͻÿ�
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
// ������ ���� �������ڷ� ���޵� ������ �μ��ϰų� 
// Ȥ�� �Լ��̸� �����ϰ� �� ����� �μ��ϵ��� ���α׷��� �ۼ��϶�
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
