#include<stdio.h>
#include<stdlib.h>

typedef int bool;
#define TRUE (1==1);
#define FALSE (!TRUE);

// 一条记录的结构
typedef struct Records{
	unsigned int id;
	unsigned char app[20];
	unsigned char username[32];
	unsigned char password[32];
	unsigned char remarks[100];
	struct Records *next;
}Records,*RecordsPtr;

// 整个系统的全局配置
typedef struct GlobalConfig{
	char email[50];  //存储使用者的邮箱
	char sysPwd[30]; //存储读取的系统密码
	int totalNum; 	//记录数量
	RecordsPtr records; //存储密码的链表
}GlobalConfig,*GlobalConfigPtr;



// 显示进入系统的第一个菜单
void showAppMenu(){
	system("CLS");
	printf("   _ __                                                      _   \n");
	printf("  | '_ \\  __ _     ___     ___   __ __ __  ___      _ _   __| |  \n");
	printf("  | .__/ / _` |   (_-<    (_-<   \\ V  V / / _ \\    | '_| / _` |  \n");
	printf("  |_|__  \\__,_|   /__/_   /__/_   \\_/\\_/  \\___/   _|_|_  \\__,_|  \n");
	printf("-------------------------个人密码存储系统--------------------------\n");
	
	printf("|                         #1 登陆系统                             |\n");
	printf("|                         #2 忘记密码                             |\n");
	printf("|                         #3 登出系统                             |\n");
	printf("-------------------------------------------------------------------\n");
}

/**
 * 模块零：本系统的一些辅助函数
 * 		1. 字符串的加密、解密
 *		2. 数字的加密解密
 *  	3. 文件的读取和存储函数
 * 		4. 随机数字和字符的产生
 *
 */

// 13*23=299 22*12=264
#define RSA_N 299
// 5*53=265
#define RSA_E 53
#define RSA_D 5
// 1. 字符串的加密、解密
void encryptAndStore(unsigned char *str,int length){
	int result,temp;
	for(int i = 0;i<length;i++){
		temp = (unsigned int)str[i];
		result =1;
		for(int j = 0;j<RSA_E;j++)
			result = result*temp % RSA_N;
		
	}	

// 2. 数字的加密解密
#define NUM_SECRET_KET 2154148466
int encryptInt(int num){
	int temp = NUM_SECRET_KET;
	return num^temp;
}
int decryptInt(int num){
	int temp = NUM_SECRET_KET;
	return num^temp;
}

// 3. 文件的读取和存储函数

// 4. 随机数字和字符的产生



/**
 * 模块一：与存储的密码相关的操作
 * 
 */


/**
 * 模块二：找回本系统的密码
 * 
 */


/**
 * 模块三：初始化系统以及注册
 *
 */

int main(void){
	GlobalConfig globalConfig;
	Records records;
	
	int choose = 0;
	do{
		showAppMenu();
		printf("请选择：");
		fflush(stdin);
		scanf("%d",&choose);
		switch(choose){
			case 1:
				continue;
			case 2:
			    continue;
			case 3:
				printf("再见!\n");
				system("PAUSE");
			    break;
			default:
				continue;
		}
	}while(3!=choose);
	
	return 0;
}