#include <stdio.h>

struct st {
	int a;
	char b;
}x={10,'k'};

int main (int argc, const char * argv[]) {
/*
	char a[4] = "LEW";
	char *p=a;

	printf("%X:%X\n",p,&p);
	printf("%X:%X\n",a,&a);
	printf("%X:%X\n",main,&main);
	printf("%X:%X\n","LEW",&"LEW");
*/
	char a[] = "Motel";
	char *p = "Motel";
	// realloc
	a[0] = 'H';
//	p[0] = 'H';
	
	printf("%s\n",a);
	printf("%X\n",*a);	
	
	struct st *pp = &x;
	
	(*pp).b = 'l'; // . 의 우선 순위가 높기 때문에 (*p)에 괄호를 먼저 해야 한다.
//	p->b = 'l';


/*
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	 
	printf("%x:%x:%x\n",a[0],a[0]+1,a[0]+2);
	printf("%x:%x:%d\n",&a,&a+1,sizeof(a));
*/

    return 0;	
}
