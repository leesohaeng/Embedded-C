#include <stdio.h>

int main (int argc, const char * argv[]) {
	double	d;
	float	f;
	int		i;
	short int s;
	
	//s=i=f=d=100/3.;
	
	s=(short int)(i=(int)(f=(float)(d=100/3.)));
	printf("%d\t%d\t%g\t%.20f\t\n",s,i,f,d);

    return 0;
}
