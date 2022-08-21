#include <stdio.h>

int main (int argc, const char * argv[]) {
	float	pi = 3.14;
	double  PI = 3.14;
	// FALSE인 이유는 3.14가 float형이 아니라 double형으로 처리되기 때문.
	// 항상 비교할 대상을 비교대상과 같은 타입으로 변환해 주어야 한다.
	// (float)3.14로 변환시 TRUE
	if( pi == (float)3.14 ) printf("TRUE\n");
	else					printf("FALSE\n");
    return 0;
}
