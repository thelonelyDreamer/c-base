#include <stdio.h> 
#include <stdlib.h>

int main(int argc,char* argv[]){
	if(argc!=3){
		printf("Error argument, please retry.\n");
	}
	float f = atof(argv[1]);
	int i = atoi(argv[2]);
	float result = 1;
	int k;
	for(k=0;k<i;k++){
		result = result*f;
	}
	printf("The %g 's %d power is %g\n",f,i,result);
	
	return 0;
}
