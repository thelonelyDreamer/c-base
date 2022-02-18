#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 256

void print_orig(char* str);
void print_upper(char* str);
void print_lower(char* str);

int main(int argc,char* argv[]){
	
	int i;
	for(i=0;i<argc;i++){
		printf("%s\n",argv[i]); 
	} 
	
	char c;
	if(argc<2){
		c = 'p';
	}else{
		c = argv[1][1];
	}
	char test[SIZE];
	printf("Enter a string to convert: ");
	fgets(test,SIZE,stdin);
	switch(c){
		case 'p':
		case 'P':
			print_orig(test);
			break;
		case 'u':
		case 'U':
			print_upper(test);
			break;
		case 'L':
		case 'l':
			print_lower(test);
	}
	printf("good bye!\n");
	return 0;
} 

void print_orig(char* str){
	printf("The original text is:\n%s",str);
}

void print_upper(char* str){
	printf("The upper case text is:\n");
	while(*str!=EOF && *str!='\0'){
		putchar(toupper(*str++));
	}
}

void print_lower(char* str){
	printf("The lower case text is:\n");
	while(*str!=EOF && *str!='\0'){
		putchar(tolower(*str++));
	}
}









