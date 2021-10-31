#include<stdio.h>

int f(int x){
	static int k=0;
	k=k+x;
	return k;	
} 

int main(void){
	printf("%d",f(f(1)));
	
	return 0;
} 
