#include<stdio.h>
// #include<math.h>

double func(double x,int y){
	int s=1.0;
	int i;
	for(i=1;i<=y;i++) s*=x;
	return s; 
}

int main(void){
	double a=1;
	double b=2;
	double result = func(a,4)+func(b,4)+func(a+b,3);
	printf("%lf",result);
	return 0; 
}
