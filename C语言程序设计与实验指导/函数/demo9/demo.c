#include<stdio.h>

int f(int x){
	return(x*x*x+1);
} 

int sum(int n){
	int i;
	int s=0;
	for(i=0;i<=n;i++) s+=f(i);
	return s;
}

int main(void){
	printf("%d",sum(0));
	
	return 0;
}
