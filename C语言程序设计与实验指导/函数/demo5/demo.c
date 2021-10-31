#include<stdio.h>

void fun(int x,int y){
	x=x+y;
	y=x-y;
	x=x-y;
	printf("%d %d\n",x,y);
} 

int main(void){
	int x=2;
	int y=3;
	fun(x,y);
	printf("%d %d\n",x,y);
	
	return 0;
}
