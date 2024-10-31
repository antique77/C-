/* 
编写一个函数，从标准输入读取一个字符串，把字符串复制到动态分配的内存中，
并返回该字符串的拷贝。这个函数不应该对读入字符串的长度作任何限制!
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define len 10
char* readstr()
{
	int count = 0;
	char word;
	
	char* str = malloc(len*sizeof(char));
	if(str == NULL)
		return NULL;
	while( (word =getchar()) != '\n' )
	{
		str[count++] = word;
		if(count >= len)
		{
			str = realloc(str,count*sizeof(char));
			if(str == NULL)
				return NULL;
		}

	}
	if(count < len)
	{
		str = realloc(str,count*sizeof(char));
		if(str == NULL)
			return NULL;
	}

	return str;
}

int main()
{
	char* string = readstr();
	if(string == NULL)
		exit(EXIT_FAILURE);
	printf("%s ",string);
	free(string);
	return (0);
}

