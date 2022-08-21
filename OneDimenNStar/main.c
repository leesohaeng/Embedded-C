#include <stdio.h>

int main (int argc, const char * argv[]) {
	int	a[4]={10,20,30,40};
	int b[4];
	char c[10]={"1234"};
	char cc[5]={'a','b','c'};
	short ss[4] = {10,20,30,40};
	char str[10];
	char *STR = "Sample";
	
	printf("%p:%p:%p:%#X\n",a[0],a[1],&a[0],&a[1]);
	printf("%s\n",c);
	printf("%p\n",c);
	printf("%p\n",&"1234");
	
	scanf("%s",&str);
	// b = a; 
	printf("%d;%d;%d;%d\n",0[a],1[a],2[a],3[a]);
	printf("%s\n",str);
	
	/*printf("%X:%X:%X\n",a,a+1,*a);
	printf("%X:%X:%X\n",*(a+1),a+2,*(a+2));
	printf("%X:%X:%X:%X\n",a,&a,a+1,&a+1);*/

    return 0;
}
