/* 
模拟strcpy函数的实现
 */

#include <stdio.h>

char* my_strcpy(char* str1,const char* str)
{
	char* test = str1;
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
	char str1[20];
	scanf("%s",str);

	char* ret = my_strcpy(str1,str);
	printf("%s\n",str1);
	printf("%s\n",ret);
	return (0);
}

