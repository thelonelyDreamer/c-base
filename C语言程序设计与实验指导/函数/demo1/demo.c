#include<stdio.h> 

int fun(int x,int y){
	static int m=0,i=2; // 此时是两个静态变量，不会随函数调用而释放 
	i=i+m+1;
	m=i+x+y;
	return m;
}


int main(void){
	int j =4,m=1,k;
	k=fun(j,m);
	printf("%d,",k);
	k=fun(j,m);
	printf("%d\n",k);
	
	return 0;
}
