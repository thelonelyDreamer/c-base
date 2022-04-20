#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FILE_NAME "temp.txt" 
#define LENGTH 30

typedef struct vocabulary{
	char word[LENGTH];
	struct vocabulary* next;	
}VOCABULARY,*VOCABULARYPTR;

void store(const VOCABULARYPTR head){
	FILE* file =fopen(FILE_NAME,"w");
	VOCABULARYPTR temp = head->next;
	while(temp!=NULL){
		fprintf(file,"%s\n",temp->word);
		temp=temp->next;
	}
	fclose(file);
}

void addWord(const VOCABULARYPTR head){
	char temp[LENGTH];
	printf("请输入一个单词:");
	fflush(stdin);
	scanf("%s",temp);
	VOCABULARYPTR tempWord = (VOCABULARYPTR)malloc(sizeof(VOCABULARY));
	strcpy(tempWord->word,temp);
	tempWord->next=head->next;
	head->next=tempWord;
	store(head);
}
void deleteWord(const VOCABULARYPTR head){
	if(head->next==NULL){
		return;
	}
	VOCABULARYPTR temp1 = head;
	VOCABULARYPTR temp2 = head->next;
	while(temp2->next!=NULL){
		temp1=temp1->next;
		temp2=temp2->next;
	}
	printf("请复习 %s\n",temp2->word);
	printf("掌握了吗？'y'or'n':");
	char result;
	fflush(stdin);
	scanf("%c",&result);
	if(result=='y'){
		//删除并存储
		temp1->next=NULL;
		free(temp2);
		store(head);
	}else{
		printf("大侠请重新来过！\n");
	}
}

void showWords(const VOCABULARYPTR head){
	VOCABULARYPTR temp=head->next;
	while(temp!=NULL){
		printf("%s\n",temp->word);
		temp=temp->next;
	}
}

void cancellAdd(const VOCABULARYPTR head){
	VOCABULARYPTR temp = head->next;
	if(temp==NULL) return;
	printf("即将要删除的单词为：%s\n",temp->word);
	printf("'y'or'n':");
	fflush(stdin);
	char choose;
	scanf("%c",&choose);
	if(choose=='y'){
		head->next=temp->next;
		free(temp);
		store(head);
	}
}

int main(void){
	//申请头结点
	VOCABULARYPTR head = (VOCABULARYPTR)malloc(sizeof(VOCABULARY));
	//申请临时节点
	VOCABULARYPTR tempWord=NULL;
	char temp[LENGTH];
	head->next=NULL;
	FILE* file = fopen(FILE_NAME,"r");
	if(file!=NULL){
		//头插法建立单链表
		while(fscanf(file,"%s",temp)!=EOF){
			tempWord = (VOCABULARYPTR)malloc(sizeof(VOCABULARY));
			strcpy(tempWord->word,temp);
			tempWord->next=head->next;
			head->next=tempWord;
		}
		fclose(file);
	}
	
	char choose;
	while(1){
		printf("a--增加;d--减少；q--退出;s--显示所有;c--取消增加\n");
		printf("请输入一个字母:");
		fflush(stdin);
		scanf("%c",&choose);
		switch(choose){
			case 'q':
				return 0;
			case 'a':
				addWord(head);
				break;
			case 'd':
				deleteWord(head);
				break;
			case 's':
				showWords(head);
				break;
			case 'c':
				cancellAdd(head);
				break;
		}
	}
	return 0;
}