#include <stdio.h>

int main (int argc, const char * argv[]) {
	char	a[4] = "LEW";
	char	*p = a;

	printf("%X:%X\n",p,&p);
	printf("%X:%X\n",a,&a);
	printf("%X:%X\n",main,&main);
	printf("%X:%X\n","LEW",&"LEW");  // 문자열은 이름없는 문자배열이다. **** 주의 할것.

    return 0;
}


// C 언어에서 주소로 취급되는 4가지 ; 배열명, 함수명, 문자열 상수, 포인터 상수
// 이중에서 상수화된 주소이므로 lvalue로 취급될 수 없는 것은 배열명, 함수명, 문자열.
// lvalue로 가능한 것은 오직 포인터. 

// function의 parameter로 array는 불가. 단지 address를 전달해주는것.