#include <stdio.h>

int main (int argc, const char * argv[]) {
	char a[] = "Motel";
	char *p  = "Motel";  //문자열 상수 * 절대 변경불가. Read-Only Memory에 저장된다.
	
	a[0] = 'H';
	// p[0] = 'H';

	printf("%s\n",a);
	printf("%s\n",p);

    return 0;
}
