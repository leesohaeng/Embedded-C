#include <stdio.h>


int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int compute(int op, int a, int b);

int	(*p)();   // Ìï®ÏàòÏùò Ï£ºÏÜåÎ•º Ï†ÑÎã¨Î∞õÍ∏∞ ÏúÑÌïú ÏÑ†Ïñ∏
int (*pa[3])() = {add,sub,mul};  // Ìï®ÏàòÏùò Ï£ºÏÜåÎ•º 3Í∞úÏùò Î∞∞Ïó¥Ïóê ÏûÖÎ†• 
//한글.
int add(int a, int b) // 한글이 깨지는 문제 발생  
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int compute(int op, int a, int b)
{
	p = pa[op];
	return p(a,b);
}
int main (int argc, const char * argv[]) {
	int (*p)(int x,int y);
	
	p = add;
	printf("%d\n",p(3,4));
   
	printf("%d\n",compute(1,7,6));
   
	return 0;
}

7
1
