#include<stdio.h>

double fun(double x,int y){
	int i;
	double ret=1L;
	for(i=0;i<y;i++) ret*=x;
	return ret; 
} 

int main(void){
	double x=2.0L;
	int y=10;
	double result = fun(x,y);
	printf("%.2lf",result);
	return 0;
}
