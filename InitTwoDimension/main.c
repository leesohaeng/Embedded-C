#include <stdio.h>

int main (int argc, const char * argv[]) {
	int	a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

	printf("%d\n",a[1][2]);


	// 이차원 배열에서 요소의 값의 위치를 변경하여 표준 결과와 동일한 결과 **
	printf("%d\n",2[1[a]]);
	printf("%d\n",3[2[a]]);
	
	// 배열의 요소는 range를 검사하지 않는다. 아래는 모두 error없이 처리됨.
	// 배열 요소의 값이 음수일 경우에도 error없이 처리. -,.-	
	printf("%d\n",a[-1][-2]);

    return 0;
}
