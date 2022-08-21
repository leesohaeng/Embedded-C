#include <stdio.h>

int main()
{
	int a = 100;
	int b = 0x64;
	int c = 0144;   // Oxtal constant

	int d = -100;
	unsigned int d2 = -100;

	int e = -0x64;
	unsigned int e2 = -0x64;

	int f = -1;
	unsigned int f2 = -1;

	int g = -12345678;
	short int g2 = -12345678;

	unsigned char h = -100;
	signed char h2 = -100;

	char *p = "ABC";

	printf("%X\n",a);
	printf("%X\n",b);
	printf("%X\n",c);
	printf("%X\n",d);
	printf("%X\n",d2);
	printf("%X\n",e);
	printf("%X\n",e2);
	printf("%X\n",f);
	printf("%X\n",f2);
	printf("%X\n",g);
	printf("g2 ; %X\n",g2);
	printf("%X\n",h);
	printf("%X\n",h2);
	printf("%X\n",p);
	printf("%X\n",*p);
	printf("%c\n",*p);

	return 0;
}