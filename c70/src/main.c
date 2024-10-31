/* 
题目：写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char str[20];
	scanf("%s",str);
	int len = strlen(str);
	printf("%d",len);
	return (0);
}

