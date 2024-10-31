/*
模拟strcmp函数的实现
 */

#include <stdio.h>
#include <string.h>
int my_strcmp(const char* str1,const char* str)
{

	return (int)strlen(str1)-(int)strlen(str);
}
int main()
{
	char str[20];
	char str1[20];
	scanf("%s",str1);
	scanf("%s",str);
	if(my_strcmp(str1,str) >0)
	{
		printf("str1 大于 str \n");
	}else if(my_strcmp(str1,str)==0)
	{
		printf("str1 等于 str \n");
	}else{
		printf("str1 小于 str \n");
	}
	return (0);
}

