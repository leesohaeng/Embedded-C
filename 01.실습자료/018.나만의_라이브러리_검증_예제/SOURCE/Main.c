/*===== << 이 부분은 실습을 위하여 수정 금지 >> =====*/
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

/*===== << 여기부터 사용자 프로그램을 작성함 >> =====*/

// 앞에서 생성한 My_Library.a를 Library 폴더에 넣고
// 프로젝트 윈도우의 Libraries 폴더에 My_Library.a를 추가함
// 라이브러리 함수는 my_lib.h에 선언하였음

/***********************************************************/
// [1] int _My_Add(const int, const int) 검증
/***********************************************************/

///*

void main(void)
{
	int a = 10, b = 20;
	printf("_My_Add = %d\n", _My_Add(a,b));
}

//*/

/***********************************************************/
// [2] int _My_Str_Leng(const char *) 검증
/***********************************************************/

/*

void main(void)
{
	char *s = "Keyseek Lew!";
	printf("_My_Str_Leng = %d\n", _My_Str_Leng(s));
}

*/

/***********************************************************/
// [3] 문자열의 이해
// 다음 결과를 예측하시오
/***********************************************************/

/*

void main(void)
{
	char *s = "Keyseek Lew!""=%d\n";
	printf(s, _My_Str_Leng(s));
}

*/

