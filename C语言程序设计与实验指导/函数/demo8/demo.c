#include<stdio.h>

int fun(int a){
	int b=0;
	static int c=3;
	b++;
	c++;
	return (a+b+c);
} 

int main(void){
	int a=2,i;
	for(i=0;i<3;i++){
		printf("%d ",fun(i));
	}
	printf("\n");
	return 0;
}
