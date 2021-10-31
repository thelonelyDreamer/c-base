#include<stdio.h>

double pi(double eps){
	double s = 0.0,t=1.0;
	int n;
	for(n=1;t>eps;n++){
		s+=t;
		t=n*t/(2*n+1);
//		printf("%lf ",t);
	}
	return (2.0*s);
} 

int main(void){
	printf("%.7lf\n",pi(0.01));
	return 0;
}
