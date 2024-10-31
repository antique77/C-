/*
模拟strlen函数
 */

#include <stdio.h>

int my_strlen(char* str)
{
	int count = 0;
	while(*str!='\0')
	{
		str++;
		count++;
	}

	return count; 
}
int main()
{
	char str[20];
	scanf("%s",str);
	int count = my_strlen(str);
	printf("%d",count);
	return (0);
}

