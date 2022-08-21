#include <stdio.h>


/* test 01 */
/*
int main (int argc, const char * argv[]) {
	unsigned char c = 0x80;

	printf("%u\n",c);
	printf("%d\n",c);
	
    return 0;
}
*/

/* test 02 */
/*
int main (int argc, const char * argv[]) {
	signed char c = 0x80;

	printf("%u\n",c);
	printf("%d\n",c);
	
    return 0;
}
*/

/* test 03 */
/*
int main (int argc, const char * argv[]) {
	unsigned char c = 0xff;

	if(c=0xff) printf("!%x\n",c+1);
	else		printf("@%x\n",c-1);
    return 0;
}
*/
/* test 0 */
int add(int a,int b)
{
	return a+b;
}
/*
int main (int argc, const char * argv[]) {
	signed char c = 0xff;

	if(c==0xff) printf("!%x\n",c+1);
	else		printf("@%x\n",c-1);
    return 0;
}
*/
/*
int main (int argc, const char * argv[]) {
	int a=-1;
	int c = 0xffffffff;
	
	unsigned int b = 0xffffffff;  // 중요한 사항 .. 꼭 기억.
	printf("%d\n",add(a,b));
	printf("%d\n",c);
    return 0;
}
*/
/*
int main (int argc, const char * argv[]) {
	int a[4] = {1,2,3,4};
	unsigned int b;
	int      x=-1;
	b = sizeof(a);
	printf("###%d\n",b);
	
	printf("%d\n",(-1<b) );
	if( b>x )		   printf("!%d\n",a[sizeof(char)]);
	else			   printf("@%d\n",a[sizeof(short)]);
    return 0;
}
*/
int main (int argc, const char * argv[]) {
	char i=255;
	char *p=&i;

	if(p > -1) {
		(*p)++;
		printf("!%X\n",*p);
	 }
	else {
		(*p)--;
		printf("@%X\n",*p);
	}
    return 0;
}

**
@FFFFFFFE


