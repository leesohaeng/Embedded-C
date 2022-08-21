#include <stdio.h>

int main (int argc, const char * argv[]) {
	int a1[4] = {1,2,3,4}; // a1[4] 의 이름 a1, &a1는 모두 a1배열의 주소이다. **** 중요.
	int a2[3] = {2,2,3}; 
	int a3[5] = {3,2,3,4,5};
	int a4[6] = {4,2,3,4,5,6};

	int *b[4] = {a1,a2,a3,a4}; // b[4]는 요소로 주소값을 갖는다. a1과 b의 주소는 다르다. 주소대입
//	int (*c)[4] = {b,b+1,b+2,b+3};  
//	int (*c)[4] = (int(*)[4])b; //{b[0],b[1],b[2],b[3]};  // 요소는 주소값, 그 이름(c[0])은 각 값의 주소를 나타낸다.
	int (*c)[4] = {b,a3,a2,a1}; // 정상적인 대입인가? 

	printf("%X:%X:%X:%X:%d\n",a1,a2,a3,a4,sizeof(a4));
	printf("%X:%X:%X:%X:%d\n",b,b+1,b+2,b+3,sizeof(b)); // b의 주소, b+1의 주소
	printf("%X:%X:%X:%X:%d\n",b[0],b[1],b[2],b[3],sizeof(b));  //b[0] b의 0번째 내용 b[0] = a1
	printf("%X:%X:%X:%X:%d\n",c[0],c,&c,c+1,sizeof(c));
	
	printf("test\n");
    return 0;
}
