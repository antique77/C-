/*
模拟strcat函数实现
 */

#include <stdio.h>

char* my_strcat(char* str1,const char* str)
{
	char* test = str1;
	while(*str1!='\0')
		str1++;
	while(*str1=*str)
	{
		str1++;
		str++;
	}

	return test;
}
int main()
{
	char str[20];
	char str1[20] ="hello ";
	scanf("%s",str);
	char* ret = my_strcat(str1,str);
	printf("%s\n",str1);
	printf("%s\n",ret);
	return (0);
}

