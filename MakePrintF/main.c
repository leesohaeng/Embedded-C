#include <stdio.h>
#include <stdarg.h>

#if 0
void my_ellipsis(int a1, ...)
{
	printf("%d\t", *(int *)(&a1+0) );   // (&a1)[0]
	printf("%X\t", *(char *)(&a1+1) );  // (&a1)[1]
	printf("%c\t", *(char *)(&a1+2) );
	printf("%.10f\t", *(double *)(&a1+3) );
	printf("%.10f\t", *(double *)(&a1+5) );

}
#else
void my_ellipsis(char *fmt, ...)
{
	int *AP = (int *)(&fmt + 1);
	int ct=1;
	while( *fmt ) {
		switch ( *fmt++ ) {
			case 'd':
					 printf("%d\t",*AP++);
					 break;
			case 'u':
					 printf("%X\t",*AP++);
					 break;
			case 'f':
					 printf("%.10f\t",*(((double *)AP)++));
					 break;
			case 'c':
					 printf("%c\t",*AP++);
					 break;
			case  's':
					 printf("%s",*AP++);
					 break;
		}
		ct++;
	}
}

#endif

int main (int argc, const char * argv[]) {
	int a=10;
	char b=0xff;
	char b2 = 'A';
	float c=3.14;
	double d=5.125;

	my_ellipsis("dfucfs",a,d,b,b2,c,"Keyseek");
    return 0;
}
