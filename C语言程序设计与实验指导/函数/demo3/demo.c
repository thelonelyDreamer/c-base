#include<stdio.h>

void fun(){
	static int a=0;
	a+=2;
	printf("%d",a);
} 

int main(void){
	int cc;
	for(cc=1;cc<4;cc++) fun();
	printf("\n");
	return 0;
}
