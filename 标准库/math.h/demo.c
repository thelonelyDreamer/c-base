#include<stdio.h> 
#include<math.h>


int main(int argc,char* argv){
	double m=5;
	double n=modf(-10.4,&m);
	printf("%lf\n%lf",m,n);
	return 0;
}
