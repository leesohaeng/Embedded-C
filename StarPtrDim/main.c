#include <stdio.h>
int	a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int (*ptr)[4] = a;   //이차배열의 주소 대입.
int *pa[3] = {a[0],a[1],a[2]}; //이차배열의 각 요소의 값을 대입. ; 각 요소값은 주소.
int *p = a[0]; // 일차배열의 주소

int main (int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
